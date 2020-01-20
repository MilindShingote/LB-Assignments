//Program to print 5 times marvellous on screen.

#include<stdio.h>

void Display(int No)
{
	int i=0;
	
	for(i=0;i<No;i++)
	{
		printf("Marvellous\n");
	}
}

int main()
{
	int Value=0;
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	Display(Value);
	
	return 0;
}
