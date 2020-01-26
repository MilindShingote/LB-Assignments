/*	Accept Character from user and check whether it is small case or not (a-z).
Input :	f
Output : TRUE
Input :	D
Output : FALSE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if((ch>='a')&&(ch<='z'))
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
	
	bRet=ChkSmall(ch);
	
	if(bRet==TRUE)
	{
		printf("It is Small");
	}
	else
	{
		printf("It is not Small");
	}
	return 0;
}
