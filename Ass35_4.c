/*	Write a program which accept one number,two positions from user and check whether bit at first or bit at second position is ON or OFF.

Input :	10	2	7
Output:	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask=iPos1;
	UINT iMask1=iPos2;
	UINT Ans1=0,Ans2=0;
	
	Ans1=iNo&iMask;
	Ans2=iNo&iMask1;
	if((Ans1==iMask)||(Ans2==iMask1))
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
	int Pos1=0,Pos2=0;
	BOOL bRet= FALSE;
	printf("Enter the number");
	scanf("%d",&Value);
	
	printf("Enter the position");
	scanf("%d%d",&Pos1,&Pos2);

	bRet=ChkBit(Value,Pos1,Pos2);
	
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
