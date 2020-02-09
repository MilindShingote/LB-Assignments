/*	Write a recursive program which display below pattern.
Input : 5
Output : 1	2	3	4	5		*/

#include<stdio.h>

void Display(int No)
{
	if(No>1)
	{
		No--;		
		Display(No);
		printf("%d\t",No);
	}
}

int main()
{
	int Value=0;
	
	printf("Enter the Number");
	scanf("%d",&Value);

	Display(Value);
	printf("%d",Value);
	return 0;
}
