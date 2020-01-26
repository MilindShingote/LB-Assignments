/*	Accept Character from user and check whether it is digit or not (0-9).
Input :	9
Output : TRUE
Input :	f
Output : FALSE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if((ch>='0')&&(ch<='9'))
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
	char ch='\0';
	BOOL bRet=FALSE;
	printf("Enter the character");
	scanf("%c",&ch);
	
	bRet=ChkDigit(ch);
	
	if(bRet==TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	return 0;
}
