/*	Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function).

Input :	“Marvellous Infosystems”
			“Marvellous Infosystems”
Output :	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL StrCmpX(char *src, char *dest)
{
	while((*src!='\0')&&(*dest!='\0'))	
	{	
		src++;
		dest++;
	}
	
	if((*src=='\0')&&(*dest=='\0'))
	{
		return TRUE;	
	}
	else
	{
		return FALSE;
	}
}


int main()
{
	char arr[50] = "Marvellous Infosystems";
	char brr[30] = "Marvellous Infosystems";
	BOOL bRet= FALSE;
	
	bRet=StrCmpX(arr,brr);
	if(bRet==TRUE)
	{
		printf("Strings are Equal");
	}
	else
	{
		printf("Strings are not Equal");
	}
	return 0;
}
