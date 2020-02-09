/*Write application which accept file name from user and one string from user. Write that string at the end of file.
Input :	Demo.txt
			Hello World	
Output : Write Hello World at the end of Demo.txt file	*/

#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 10

void DisplayData(char fName[],char Arr[])
{
	int fd=0;
	char *ptr=NULL;
	int iRet=0,iCnt=0;
	ptr=Arr;
	fd= open(fName,O_WRONLY|O_APPEND);
   
	if(fd==-1)
	{
    	printf("\nFile unable to open");
	}
   
	while(*ptr!='\0')
	{
		ptr++;
		iCnt++;
	}
	iRet=write(fd,Arr,iCnt);
	
	if(iRet==-1)
	{
		printf("Unable to write");
		close(fd);
		return ;
	}
    close(fd);
}	
int main()
{
	char Name[30];
	char Data[20];
	printf("Enter the file Name");
	scanf("%s",Name);
	
	printf("Enter the Data");
	scanf("%s",Data);
	DisplayData(Name,Data);
	return 0;
}
