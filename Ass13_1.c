/*	Write a program which accept number from user and return the count of even digits.
Input	:	2395
Output:	1	*/

#include<stdio.h>

int Count(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=Count(Value);
	
	printf("Frequency is %d",iRet);
	
	return 0;
}
