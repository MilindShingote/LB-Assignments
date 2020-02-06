/*	Write a program which accept one number and position from user and toggle that bit. Return modified number.
Input :	10		3
Output :	14	*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{

	UINT iMask=iPos+1;
	UINT Ans=iMask^iNo;	
	
	return Ans;
}

int main()
{
	UINT Value=0;	
	int iPos=0;
	UINT iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);

	printf("Enter the Possition");
	scanf("%d",&iPos);
	
	iRet=OffBit(Value,iPos);
	printf("%d\n",iRet);
	return 0;
}
