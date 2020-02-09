/*	Write a recursive program which accept number from user and return its product of digits.
Input : 523
Output : 30		*/

#include<stdio.h>

int Mult(int iNo)
{
	static int iSum=1;
	if(iNo>=1)
	{
		iSum=iSum*(iNo%10);
		iNo=iNo/10;
		iSum=Mult(iNo);
	}
	return iSum;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the Number");
	scanf("%d",&Value);

	iRet=Mult(Value);
	printf("Product of digit is %d",iRet);
	return 0;
}
