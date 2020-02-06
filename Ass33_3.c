/*	Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

Input :	137
Output :	201		*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iMask=0x00000040;
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
	
	iRet=ToggleBit(Value);
	printf("%d",iRet);
	
	return 0;
}
