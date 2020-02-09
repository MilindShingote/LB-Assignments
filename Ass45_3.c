/*Write application which accept file name from user and read all data from that file and display contents on screen.
Input : Demo.txt
Output : Display all data of file.	*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BLOCKSIZE 10

void DisplayData(char fName[])
{
	int fd=0;
	char Arr[BLOCKSIZE];
	int iRet=0;
	fd=open(fName,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file");
		return ;
	}
	
	while((iRet=read(fd,Arr,BLOCKSIZE))!=0)
	{
		write(1,Arr,BLOCKSIZE);
		memset(Arr,0,BLOCKSIZE);
	}
	close(fd);
}	
int main()
{
	char Name[30];
	
	printf("Enter the file Name");
	scanf("%s",Name);
	DisplayData(Name);
	return 0;
}
