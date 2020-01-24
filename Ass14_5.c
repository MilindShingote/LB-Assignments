/*	Accept number from user and display below pattern.
Input : 5
Output : 2	4	6	8	10	12	14	16	*/

#include<stdio.h>

void Pattern(int No)
{
	int i=0;
	for(i=1;i<=No;i++)
	{
		printf("%d\t",i*2);
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
