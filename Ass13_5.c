/*	Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input :	2395
Output :	-15 (2 - 17)	*/

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0;
	int iEven=1,iOdd=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iEven=iEven+iDigit;
		}
		else
		{
			iOdd=iOdd+iDigit;
		}
		iNo=iNo/10;
	}
	return iEven-iOdd;
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
