/*	Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5	*	4	*	3	*	2	*	1	*		*/

#include<stdio.h>

void Display(int No)
{
	if(No>=1)
	{
		printf("%d\t*\t",No);
		No--;		
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
