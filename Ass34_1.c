/*	Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE. 

Input :	10		2
Output :	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{

	UINT iMask=iPos;
	UINT Ans=iMask&iNo;
	
	if(Ans==iMask)
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
	int iPos=0;
	BOOL bRet=FALSE;
	printf("Enter the number");
	scanf("%d",&Value);

	printf("Enter the Possition");
	scanf("%d",&iPos);
	
	bRet=ChkBit(Value,iPos);
	if(bRet==TRUE)
	{
		printf("Bit is On");
	}
	else
	{
		printf("Bit is Off");
	}
	return 0;
}
