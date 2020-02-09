/*Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully.	*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char Name[30];
	int fd=0;
	
	printf("Enter the file Name");
	scanf("%s",Name);
	
	fd=open(Name,O_CREAT);
	
	if(fd==-1)
	{
		printf("Unable to create file");
		return -1;
	}
	printf("File is successfully created with fd%d",fd);
	
	close(fd);	
	
	return 0;
}
