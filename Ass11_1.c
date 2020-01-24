/*	Write a program which accept range from user and display all numbers in between that range.
Input :	23	35
Output : 23	24 25 26 27 28 29 30 31	32 33 34 35	
Input :	10	18
Output : 10 11 12 13 14 15 16 17 18
Input :	10	10
Output : 10  
Input :	-10	2
Output : -10 2	-9 -8 -7 -6 -5 -4 -3 -2	-1 0 1 2
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
	for(i=iStart;i<=iEnd;i++)
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
