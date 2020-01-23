/*	Write a program which accept number from user and print numbers till that
number.
Input : 8
Output : 1	2 3	4	5	6	7	8	*/

#include<stdio.h>

void Display(int No)
{
	int i=0;
	
	for(i=1;i<=No;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int Value=0;
	
	printf("Enter the number:");
	scanf("%d",&Value);
	
	Display(Value);
	
	return 0;
}
