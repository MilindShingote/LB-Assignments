/*	Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.	*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char Name[30];
	int fd=0;
	
	printf("Enter the file Name");
	scanf("%s",Name);
	
	fd=open(Name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	printf("File is successfully opened with fd%d",fd);
	
	close(fd);	
	
	return 0;
}
