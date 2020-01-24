/*	Write a program which accept range from user and display all numbers in between that range.

Input :	23	35
Output : 35	34 33 32 31 30 29 28 27	26	25	24	23

Input :	90 18
Output : Invalid range	*/

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
	int i=0;
	if(iStart>iEnd)
	{
		printf("Invalid Input");
		return;
	}
	for(i=iEnd;i>=iStart;i--)
	{
		printf("%d\t",i);
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
