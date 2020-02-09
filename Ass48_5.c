/*	Write a recursive program which display below pattern.
Input : 6
Output : a	b	c	d	e	f		*/

#include<stdio.h>

void Display(int No)
{
	static char Ch='a';
	if(No>=1)
	{
		printf("%c\t",Ch);
		Ch++;
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
