/*	Write a program which accept two strings from user and check whether both the strings are equal or not without considering its case.

Input :	“MarvelloUS”
			“MARveLLous”

Output :	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL strCmpCX(char *str1,char *str2)
{	
	while((*str1!='\0')&&(*str2!='\0'))
	{
		if((*str1>='A')&&(*str1<='Z')&&(*str2>='A')&&(*str2<='Z'))
		{
			if(*str1==*str2)	
			{
				str1++;
				str2++;
			}
			else
			{
				break;
			}
		}
		else if((*str1>='a')&&(*str1<='z')&&(*str2>='a')&&(*str2<='z'))
		{
			if(*str1==*str2)	
			{
				str1++;
				str2++;
			}
			else
			{
				break;
			}
		}
		else if((*str1>='A')&&(*str1<='Z')&&(*str2>='a')&&(*str2<='z'))
		{
			if(*str1==*str2-32)	
			{
				str1++;
				str2++;
			}
			else
			{
				break;
			}
		}
		else if((*str1>='a')&&(*str1<='z')&&(*str2>='A')&&(*str2<='Z'))
		{
			if(*str1==*str2+32)	
			{
				str1++;
				str2++;
			}
			else
			{
				break;
			}
		}
	}
	
	if((*str1=='\0')&&(*str2=='\0'))
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
	char arr[50]="MarvelloUS";
	char brr[50]="MARveLLous";
	BOOL bRet= FALSE;
	bRet=strCmpCX(arr,brr);
	
	if(bRet==TRUE)
	{
		printf("Both strings are Equal");
	}
	else
	{
		printf("Both strings are not Equal");
	}		
	return 0;
}
