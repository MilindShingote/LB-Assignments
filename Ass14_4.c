/*	Accept number from user and display below pattern.
Input : 5
Output : #	1	*	#	2	*	#	3	*	#	4	*	*/

#include<stdio.h>

void Pattern(int No)
{
	int i=0;
	for(i=1;i<=No;i++)
	{
		printf("#\t%d\t*\t",i);
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
