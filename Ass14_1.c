/*	Accept number from user and display below pattern.
Input : 5
Output : A	B	C	D	E	*/

#include<stdio.h>

void Pattern(int No)
{
	char ch='A';
	int i=0;
	for(i=1;i<=No;i++)
	{
		printf("%c\t",ch);
		ch=ch+1;
	}
}

int main()
{
	int Value=0;
	printf("Enter the number:");
	scanf("%d",&Value);
	
	Pattern(Value);
	
	return 0;
}
