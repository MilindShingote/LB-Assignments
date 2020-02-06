/*	Accept string from user and check whether the string is palindrome or not without considering its case.

Input : “1abccBA1”
Output : TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL StrPallindrome(char *src)
{
	char *First=NULL;
	char *Last=NULL;
	char Temp='\0';
	First=src;
	Last=src;
	while(*Last!='\0')
	{
		Last++;
	}
	Last--;
	while(First<Last)	
	{	
		if((*First>='a')&&(*First<='z')&&(*Last>='A')&&(*Last<='Z'))
		{
			if(*First==*Last+32)
			{
				Last--;
				First++;
			}
			else
			{
				break;
			}
		}
		else if((*First>='A')&&(*First<='Z')&&(*Last>='a')&&(*Last<='z'))
		{
			if(*First==*Last-32)
			{
				Last--;
				First++;
			}
			else
			{
				break;
			}
		}
		else
		{
			if(*First==*Last)
			{
				Last--;
				First++;
			}
			else
			{
				break;
			}
		}
	}
		
	if(First>Last)
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
	char arr[50] = "1abccBA1";
	BOOL bRet=FALSE;
	
	bRet=StrPallindrome(arr);

	if(bRet==TRUE)
	{
		printf("String is pallindrom");
	}
	else
	{
		printf("String is not pallindrom");
	}
	return 0;
}	
