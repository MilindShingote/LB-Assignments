/*	Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

Input :	897	9	13

Toggle all bits from position 9 to 13 of input number ie 879.	*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask1=0xFFFFFFFF,iMask2=0xFFFFFFFF;
	UINT iMask=0,iRet=0;
	
	iMask1=iMask1<<iStart;
	iMask2=iMask2>>(32-iEnd);
	
	iMask=iMask1&iMask2;
	
	iRet=iMask^iNo;
	
	return iRet;
	
}

int main()
{
	UINT Value=0;	
	int Start=0,End=0;
	UINT iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	printf("Enter the range");
	scanf("%d%d",&Start,&End);

	iRet=ToggleBitRange(Value,Start,End);
	
	printf("%d",iRet);
	
	return 0;
}
