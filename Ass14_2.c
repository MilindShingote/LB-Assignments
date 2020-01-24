/*	Accept number from user and display below pattern.
Input : 5
Output : 5	#	4	#	3	#	2	#	1	#	*/

#include<stdio.h>

void Pattern(int No)
{
	int i=0;
	for(i=No;i>=1;i--)
	{
		printf("%d\t#\t",i);
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
