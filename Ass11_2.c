/*	Write a program which accept range from user and display all even numbers in
between that range.
	
Input :	23	35
Output : 24 26 28 30	32 34*/

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
	int i=0;
	if(iStart>iEnd)
	{
		printf("Invalid Input");
		return;
	}
	for(i=iStart;i<=iEnd;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	
}

int main()
{
	int Value1=0,Value2=0;
	
	printf("Enter Range");
	scanf("%d%d",&Value1,&Value2);
	
	RangeDisplay(Value1,Value2);
	
	return 0;
}
