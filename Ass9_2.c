/*	Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input :	10
Output : 700
Input :	3
Output : 270
Input :	1200
Output : 84000	*/

#include<stdio.h>

int DollarToINR(int iNo)
{
	int iMult=0;
	iMult=iNo*70;
	return iMult;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=DollarToINR(Value);
	printf("%d",iRet);
	return 0;
}
