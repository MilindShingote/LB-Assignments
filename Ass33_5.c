/*	Write a program which accept one number from user and on its first 4 bits. Return modified number.
Input :	73
Output :	79		*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask1=0x0000000f;
	
	UINT Ans=0;
	
	Ans=iMask1|iNo;
	return Ans;
}

int main()
{
	UINT Value=0;	
	UINT iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=ToggleBit(Value);
	printf("%d",iRet);
	
	return 0;
}
