/*	Write a recursive program which display below pattern.
Output :	*	*	*	*	*		*/

#include<stdio.h>

void Display()
{
	static int No=1;
	
	if(No<=5)
	{
		printf("*\t");
		No++;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}
