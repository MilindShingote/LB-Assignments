/*	Write a program which accepts file name from user and count number of capital characters from that file.

Input : Demo.txt
Output : Number of capital characters are 23	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10
int CountCapital(char FName[])
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
			if((Arr[i]>='A')&&(Arr[i]<='Z'))
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
	
	iRet = CountCapital(Name);
	printf("Number of Capital characters are %d",iRet);
	
	return 0;
}
