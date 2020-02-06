/*	Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
Input :	577
Output :	1		*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask=0x00000240;
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
