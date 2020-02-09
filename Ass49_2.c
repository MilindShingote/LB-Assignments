/*	Write a recursive program which accept number from user and return summation of its digits.
Input : 879
Output : 24		*/

#include<stdio.h>

int Sum(int No)
{
	static int iSum=0;
	if(No!=0)
	{
		iSum=iSum+(No%10);
		No=No/10;
		iSum=Sum(No);
	}
	return iSum;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the Number");
	scanf("%d",&Value);

	iRet=Sum(Value);
	printf("Summation is %d",iRet);
	return 0;
}
