/*	Write a program which accepts N from user and print all odd numbers up to N.
Input : 18
Output : 1	3	5	7	9	11	13	*/

#include<stdio.h>

void Odd(int No)
{
	int i=0;
	
	for(i=1;i<=No;i++)
	{
		if(i%2!=0)	
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int Value=0;
	
	printf("Enter the number:");
	scanf("%d",&Value);
	
	Odd(Value);
	
	return 0;
}
