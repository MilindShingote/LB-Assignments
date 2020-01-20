/* Write a program which accept number from user and display all its non factors

Input :	12
Output:	5	7	8	9	10	11 */

#include<stdio.h>
void NonFact(int iNo)
{
	int i=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int Value=0;
	printf("Enter the Value");
	scanf("%d",&Value);

	NonFact(Value);
	return 0;
}
