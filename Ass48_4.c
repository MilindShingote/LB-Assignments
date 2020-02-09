/*	Write a recursive program which display below pattern.
Input : 6
Output : A	B	C	D	E	F		*/

#include<stdio.h>

void Display(int No)
{
	static char Ch='A';
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
