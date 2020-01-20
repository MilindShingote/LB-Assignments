//Accept number from user and check whether that number is divisible by 3 or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Div(int No)
{
	if((No%3)==0)
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
	int Value=0;
		
	BOOL bRet=FALSE; 
	printf("Enter the Number");	
	scanf("%d",&Value);
	bRet=Div(Value);
		
	if(bRet==FALSE)
	{
		printf("This number is not devisible by 3.\n");
	}
	else
	{
		printf("This number is devisible by 3.\n");
	}
	return 0;
}
