/*Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes.	*/

#include<stdio.h>
#define BLOCKSIZE 10

void FileSize(char fName[])
{
	FILE *fd;
	char Arr[BLOCKSIZE];
	int iRet=0;
	fd= fopen(fName,"r");
   
	if(fd==NULL)
	{
    	printf("\nFile unable to open");
	}
   else
	{ 
    	fseek(fd,0,2);    	//file pointer at the end of file 
    	iRet = ftell(fd);   	//take a position of file pointer un size variable 
    	printf("The size of given file is : %d\n",iRet);
	}    
    fclose(fd);
}	
int main()
{
	char Name[30];
	
	printf("Enter the file Name");
	scanf("%s",Name);
	FileSize(Name);
	return 0;
}
