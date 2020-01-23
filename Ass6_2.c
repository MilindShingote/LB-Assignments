/*Write a program which accept one number from user and check whether that
number is greater than 100 or not.
Input : 101
Output : Greater */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkGreater(int No)
{
	if(No<100)
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
	int Value=0;
	BOOL bRet=FALSE;
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	bRet=ChkGreater(Value);
	if(bRet==TRUE)
	{
		printf("This number is Smaller than 100");
	}
	else
	{
		printf("This number is Greater than 100");
	}
	return 0;
}
