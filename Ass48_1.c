/*	Write a recursive program which display below pattern.
Input : 5
Output : *	*	*	*	*		*/

#include<stdio.h>

void Display(int No)
{
	if(No>=1)
	{
		No--;
		printf("*\t");
		Display(No);
	}
}

int main()
{
	int Value=0;
	
	printf("Enter the Number");
	scanf("%d",&Value);

	Display(Value);
	return 0;
}
