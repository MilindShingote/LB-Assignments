/*	Write a program to find even factorial of given number.
Input :	5
Output : 8 (4 * 2)	*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
	int i=0;
	int iMult=1;
	for(i=iNo;i>=1;i--)
	{
		if(i%2==0)	
		{
			iMult=iMult*i;
		}
	}
	return iMult;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=EvenFactorial(Value);
	printf("%d",iRet);
	return 0;
}
