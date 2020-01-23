/*	Write a program which returns difference between Even factorial and odd factorial
of given number.
Input :	5
Output : -7 (8 - 15)
Input :	-5
Output : -7 (8 - 15)	*/

#include<stdio.h>

int OddFactorial(int iNo)
{
	int i=0;
	int Even=1,Odd=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=iNo;i>=1;i--)
	{
		if(i%2==0)	
		{
			Even=Even*i;
		}
		else
		{
			Odd=Odd*i;
		}
	}
	return Even-Odd;
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
