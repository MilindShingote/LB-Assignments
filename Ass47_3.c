/*	Write a recursive program which display below pattern.
Output :	5	4	3	2	1		*/

#include<stdio.h>

void Display()
{
	static int No=1;
	
	if(No<=5)
	{
		No++;
		Display();
		No--;
		printf("%d\t",No);
	}
}

int main()
{
	Display();
	return 0;
}
