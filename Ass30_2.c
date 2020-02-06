/*	Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

Input : “Marvellous Multi OS”
			10
Output :	“Marvellous	
	Note : If third parameter is greater than the size of source string then
copy whole string into destination.*/

#include<stdio.h>

void StrCpyX(char *src,char *dest,int Size)
{
	while((*src!='\0')&&(Size>0))
	{
		*dest=*src;
		*src++;
		*dest++;
		Size--;
	}
	*dest='\0';
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30];		// Empty string
	int iSize=0;
	printf("Enter the Size");	
	scanf("%d",&iSize);
	StrCpyX(arr,brr,iSize);
	printf("%s",brr);
	return 0;
}
