/*	Write a program which accept number from user and return multiplication of all digits.
Input	:	2395
Output:	270	*/

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	return iMult;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=MultDigits(Value);
	
	printf("Multiplication is %d",iRet);
	
	return 0;
}
