/*Accept two numbers from user and return the largest number*/

#include<stdio.h>

int Maximum(int No1,int No2)
{

	if(No1>No2)
	{
		return No1;
	}
	else
	{
		return No2;
	}
}
	
int main()
{
	int Value1=0,Value2=0,Max=0;
	
	printf("Enter the First Number: ");
	scanf("%d",&Value1);
	
	printf("Enter the Second Number: ");
	scanf("%d",&Value2);
	
	Max=Maximum(Value1,Value2);
	
	printf("The maximum number is: %d\n",Max);
	return 0;
}


