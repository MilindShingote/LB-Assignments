//Accept number from user and check whether second no is factor of first no or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Factor(int No1,int No2)
{
	if((No1%No2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int Value1=0,Value2=0;
	BOOL bRet=FALSE;
	printf("Enter the first number:");
	scanf("%d",&Value1);
	
	printf("Enter the second number:");
	scanf("%d",&Value2);
	
	bRet=Factor(Value1,Value2);
	if(bRet==TRUE)
	{
		printf("%d is a factor of %d",Value2,Value1);
	}
	else
	{
		printf("%d is not a factor of %d",Value2,Value1);
	}
	return 0;
}

