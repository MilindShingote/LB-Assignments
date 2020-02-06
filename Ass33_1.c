/*	Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

Input :	79
Output :	15		*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask=0x0000040;
	UINT Ans=0;
	
	Ans=iNo^iMask;
	
	return Ans;
}

int main()
{
	UINT Value=0;	
	UINT iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=OffBit(Value);
	printf("%d",iRet);
	
	return 0;
}
