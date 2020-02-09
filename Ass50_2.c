/*	Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9		*/

#include<stdio.h>
int Max(int iNo)
{
	static int iMax=0;
	
	if(iNo!=0)
	{
		if(iMax<(iNo%10))
		{
			iMax=iNo%10;
		}
		iNo=iNo/10;
		iMax=Max(iNo);
	}
	return iMax;
}

int main()
{
	int Value=0;
	int iRet=0;
	
	printf("Enter the Value");
	scanf("%d",&Value);
	
	iRet=Max(Value);
	printf("The Largest digit is %d",iRet);
	
	return 0;
}
