/*		Write a recursive program which display below pattern.
Output :	a	b	c	d	e	f		*/

#include<stdio.h>

void Display()
{
	static int No=1;
	static char Ch='a';
	if(No<=6)
	{
		No++;
		printf("%c\t",Ch);
		Ch++;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}
