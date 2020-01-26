/*	Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input :	F
Output : TRUE
Input :	f
Output : FALSE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Capital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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
	
	bRet=Capital(ch);
	
	if(bRet==TRUE)
	{
		printf("It is Capital");
	}
	else
	{
		printf("It is not Capital");
	}
	return 0;
}
