/*	Write a program which accept number from user and print its numbers line.
Input : 4
Output : -4	-3	-2	-1	0	1	2	3	4	*/

#include<stdio.h>

void Display(int No)
{
	int i=0;
	
	for(i=-No;i<=No;i++)
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
