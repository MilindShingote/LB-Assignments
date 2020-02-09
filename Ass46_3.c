/*	Write a program which accepts file name from user and count number of white spaces from that file.

Input : Demo.txt
Output : Number of white spaces are 13	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10
int CountWhite(char FName[])
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
			if(Arr[i]==' ')
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
	
	iRet = CountWhite(Name);
	printf("Number of White Spaces are %d",iRet);
	
	return 0;
}
