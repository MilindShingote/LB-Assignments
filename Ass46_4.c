/*	Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.

Input : Demo.txt
			‘M’
Output : Frequency of M is 7	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10
int CountChar(char FName[], char Ch)
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
		for(i=0;i<BLOCKSIZE;i++)
		{
			if(Arr[i]==Ch)
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
	char cValue='\0';
	printf("Enter the file Name");
	scanf("%s",Name);
	
	printf("Enter the Character");
	scanf(" %c",&cValue);

	iRet = CountChar(Name,cValue);
	printf("Frequency is %d",iRet);
	
	return 0;
}
