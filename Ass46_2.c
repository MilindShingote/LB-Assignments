/*	Write a program which accepts file name from user and count number of small characters from that file.

Input : Demo.txt
Output : Number of small characters are 21	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10
int CountSmall(char FName[])
{
	int fd=0,iCnt=0,i=0;
	char Arr[BLOCKSIZE];
	fd=open(FName,O_RDONLY);
	int Ret=0;

	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	while((Ret=read(fd,Arr,BLOCKSIZE))!=0)
	{
		for(i=0;i<10;i++)
		{
			if((Arr[i]>='a')&&(Arr[i]<='z'))
			{
				iCnt++;
			}
		}
		memset(Arr,0,BLOCKSIZE);
	}
	close(fd);
	return iCnt;
}

int main()
{
	char Name[30];
	int iRet=0;
	printf("Enter the file Name");
	scanf("%s",Name);
	
	iRet = CountSmall(Name);
	printf("Number of Small characters are %d",iRet);
	
	return 0;
}
