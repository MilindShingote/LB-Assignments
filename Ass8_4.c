/*	Write a program which accept number from user and display its table.
Input :
Output : 2
2 4 6 8 10 12 14 16 18 20
Input :
Output : 5
5 10 15 20 25 30 35 40 45 50
Input :
Output : -5
5 10 15 20 25 30 35 40 45 50	*/

#include<stdio.h>
void Table(int iNo)
{
	int i=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=1;i<=10;i++)
	{
		iSum=iSum+iNo;
		printf("%d\t",iSum);
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
