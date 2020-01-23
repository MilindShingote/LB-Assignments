/*	Accept single digit number from user and print it into word.
Input : 9
Output : Nine	*/

#include<stdio.h>
void Display(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}

	if(iNo==0)
	{
		printf("Zero");
	}
	else if(iNo==1)
	{
		printf("One");
	}
	else if(iNo==2)
	{
		printf("Two");
	}
	else if(iNo==3)
	{
		printf("Three");
	}
	else if(iNo==4)
	{
		printf("Four");
	}
	else if(iNo==5)
	{
		printf("Five");
	}
	else if(iNo==6)
	{
		printf("Six");
	}
	else if(iNo==7)
	{
		printf("Seven");
	}
	else if(iNo==8)
	{
		printf("Eight");
	}
	else if(iNo==9)
	{
		printf("nine");
	}
	
}
int main()
{
	int Value=0;
	
	printf("Enter the number");
	scanf("%d",&Value);
	
	Display(Value);
	
	return 0;
}
