/*	Write a program which accept 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function).

Input :	“Marvellous Infosystems”
			“Marvellous Logic Building”
			10
Output :	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL StrCmpX(char *src, char *dest,int iCnt)
{
	while((*src!='\0')&&(*dest!='\0')&&(iCnt!=0))	
	{	
		iCnt--;
		if(*src==*dest)
		{
			src++;
			dest++;
		}
		else
		{
			break;
		}
	}
	
	if(*src==*dest)
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
	char brr[30] = "Marvellous Logic Building";
	int Value=0;
	BOOL bRet= FALSE;
	
	printf("Enter the number");
	scanf("%d",&Value);

	bRet=StrCmpX(arr,brr,Value);
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
