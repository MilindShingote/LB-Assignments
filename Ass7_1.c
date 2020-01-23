/*	Write a program which accept number from user and print that number of $ & *
on screen.
Input : 5
Output : $	*	$	*	$	*	$	*	$	*	*/

#include<stdio.h>

void Display(int No)
{
	int i=0;
	
	for(i=1;i<=No;i++)
	{
		printf("$\t*\t");
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
