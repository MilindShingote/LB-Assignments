/*Write a program which accept two numbers and check whether numbers are
equal or not.
Input : 10 10
Output : Equal */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Equal(int No1,int No2)
{
	if(No1==No2)
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
	printf("Enter the First Number:");
	scanf("%d",&Value1);
	
	printf("Enter the Second Number:");
	scanf("%d",&Value2);
	
	bRet=Equal(Value1,Value2);
	if(bRet==TRUE)
	{
		printf("Numbers are Equal");
	}
	else
	{
		printf("Numbers are not Equal");
	}
	return 0;
}
