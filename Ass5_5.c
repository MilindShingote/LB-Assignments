/*Write a program which accept number from user and return difference between summation of all its factors and non factors.
Input :	12
Output:	-34 	(16-50) */

#include<stdio.h>
int FactDiff(int iNo)
{
	int i=0,Even=0,Odd=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			Odd=Odd+i;
		}
		else
		{
			Even=Even+i;
		}
	}
	return Even-Odd;
}

int main()
{
	int Value=0,iRet=0;
	printf("Enter the Value");
	scanf("%d",&Value);

	iRet = FactDiff(Value);
	printf("%d",iRet);
	return 0;
}
