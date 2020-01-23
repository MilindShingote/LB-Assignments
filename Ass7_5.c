/*	Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4	8	12	16	20	*/

#include<stdio.h>

void Odd(int No)
{
	int i=0,iSum=0;
	
	for(i=1;i<=No;i++)
	{
		iSum=iSum+No;
		printf("%d\t",iSum);
	}
}
int main()
{
	int Value=0;
	
	printf("Enter the number:");
	scanf("%d",&Value);
	
	Odd(Value);
	
	return 0;
}
