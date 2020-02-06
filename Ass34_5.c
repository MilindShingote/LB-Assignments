/*	Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. 
(Nibble is a group of four bits)

Input :	10		3
Output :	14	*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{

	UINT iMask=0xf000000f;
	UINT Ans=0;
	Ans=iMask^iNo;	

	return Ans;
}

int main()
{
	UINT Value=0;	
	int iPos=0;
	UINT iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=ToggleBit(Value);
	printf("%d\n",iRet);
	return 0;
}
