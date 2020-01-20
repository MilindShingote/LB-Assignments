/*	Accept number from user and check whether that number is prime number or not.
	Prime number is such number withaout any factor accept one and the number itself
	
Input	:	-5
Output:	yes

Input	:	10
Output:	No	*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Prime(int iNo)
{
	int i=0;
	BOOL Flag=TRUE;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=2;i<=iNo/2;i++)
	{
		if(iNo%i==0)
		{
			Flag=FALSE;
			break;	
		}
	}
	
	return Flag;
}

int main()
{
	int Value=0;
	BOOL bRet=FALSE;
	
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	bRet=Prime(Value);
		
	if(bRet==TRUE)
	{
		printf("It is prime number");
	}
	else
	{
		printf("It is not prime number");
	}
	
	return 0;
}
