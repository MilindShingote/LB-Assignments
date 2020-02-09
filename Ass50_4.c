/*	Write a recursive program which accept number from user and return smallest digit.
Input : 87983
Output : 3		*/

#include<stdio.h>
int Min(int iNo)
{
	static int iMin=9;
	
	if(iNo!=0)
	{
		if(iMin>(iNo%10))
		{
			iMin=iNo%10;
		}
		iNo=iNo/10;
		iMin=Min(iNo);
	}
	return iMin;
}

int main()
{
	int Value=0;
	int iRet=0;
	
	printf("Enter the Value");
	scanf("%d",&Value);
	
	iRet=Min(Value);
	printf("The Smallest digit is %d",iRet);
	
	return 0;
}
