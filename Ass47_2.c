/*	Write a recursive program which display below pattern.
Output :	1	2	3	4	5	*/

#include<stdio.h>

void Display()
{
	static int No=1;
	
	if(No<=5)
	{
		printf("%d\t",No);
		No++;
		Display();
		
	}
}

int main()
{
	Display();
	return 0;
}
