/*	Write a recursive program which accept number from user and return its factorial.
Input : 5
Output : 120		*/

#include<stdio.h>

int Fact(int iNo)
{
	static int iSum=1;
	if(iNo>=1)
	{
		iSum=iSum*iNo;
		iNo--;
		iSum=Fact(iNo);
	}
	return iSum;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the Number");
	scanf("%d",&Value);

	iRet=Fact(Value);
	printf("Factor is %d",iRet);
	return 0;
}
