/* Write a program which accept number from user and display its factors in decreasing order.
Input :	12
Output: 6	4	3	2	1 */

#include<stdio.h>
void FactRev(int iNo)
{
	int i=0,iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=iNo/2;i>0;i--)
	{
		if(iNo%i==0)
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

	FactRev(Value);
	return 0;
}
