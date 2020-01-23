/*	Write a program to find odd factorial of given number.
Input :	5
Output : 15 (5 * 3	*	1)	*/

#include<stdio.h>

int OddFactorial(int iNo)
{
	int i=0;
	int iMult=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=iNo;i>=1;i--)
	{
		if(i%2!=0)	
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
	
	iRet=OddFactorial(Value);
	printf("%d",iRet);
	return 0;
}
