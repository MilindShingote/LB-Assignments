/*	Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
Input	:	2147484545
Output:	TRUE	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0x80000001;
	UINT Ans=0;
	
	Ans=iNo&iMask;
	
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
