/*	Write a program which accepts file name and one count from user and read that number of characters from starting position.

Input : 	Demo.txt
			12
Output : Display first 12 characters from Demo.txt	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void DisplayN(char FName[],int No)
{
	int fd=0,iCnt=0,i=0;
	char Arr[BLOCKSIZE];
	fd=open(FName,O_RDONLY);
	int Ret=0;
	BOOL Flag=TRUE;
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	while((Ret=read(fd,Arr,BLOCKSIZE))!=0)
	{
		if(Flag==FALSE)
		{
			break;
		}
		for(i=0;i<BLOCKSIZE;i++)
		{
				iCnt++;
				if(iCnt>No)
				{
					Flag=FALSE;
					break;
				}
				printf("%c",Arr[i]);
		}
		memset(Arr,0,BLOCKSIZE);
	}
	close(fd);
}

int main()
{
	char Name[30];
	int iValue=0;
	printf("Enter the file Name");
	scanf("%s",Name);
	
	printf("Enter the Value");
	scanf(" %d",&iValue);

	DisplayN(Name,iValue);
	
	return 0;
}
