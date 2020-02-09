/*		Write a recursive program which display below pattern.
Output :	A	B	C	D	E	F		*/

#include<stdio.h>

void Display()
{
	static int No=1;
	static char Ch='A';
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
