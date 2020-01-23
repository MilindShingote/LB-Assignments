/*	Write a program which accept number from user and display its table in reverse
order.
Input :
Output : 2
20 18 16 14 12 10 8 6 4 2
Input :
Output : 5
50 45 40 35 30 25 20 15 10 5
Input :
Output : -5
50 45 40 35 30 25 20 15 10 5	*/

#include<stdio.h>
void Table(int iNo)
{
	int i=0,iMult;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iMult=iNo*10;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",iMult);
		iMult=iMult-iNo;
	}
}
int main()
{
	int Value=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	Table(Value);
	return 0;
}
