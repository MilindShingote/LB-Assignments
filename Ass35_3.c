/*	Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
Input :	257
Output:	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0x00000900;
	UINT Ans=0;
	
	Ans=iNo&iMask;
	
	if(Ans!=0)
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
	UINT Value=0;	
	BOOL bRet= FALSE;
	printf("Enter the number");
	scanf("%d",&Value);
	
	bRet=ChkBit(Value);
	
	if(bRet==TRUE)
	{
		printf("Bit is On");
	}
	else
	{
		printf("Bit is off");
	}
	
	return 0;
}
