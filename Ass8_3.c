/*	Write a program to find factorial of given number.
Input :
Output : 5
120 (5 * 4 * 3 * 2 * 1)	*/

#include<stdio.h>
int Factorial(int iNo)
{
	int i=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=iNo;i>=1;i--)
	{
		iMult=iMult*i;
	}
	return iMult;
}
int main()
{
	int Value=0;
	int Ans=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	Ans=Factorial(Value);
	printf("%d",Ans);
	return 0;
}
