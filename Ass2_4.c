/* Write a prigram to accept number from user and check whether that number is perfect or not.
	perfect number is such number whoe's summation of the factors is same as that number.
	
Input	:	12	
Output:	FALSE;;
	
Input	:	28	
Output:	TRUE;	*/

#include<stdio.h>
#define TRUE 1
# define FALSE 0
typedef int BOOL;
BOOL ChkPerfect(int iNo)
{
	int i=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<=iNo/2;i++)
	{
		if(iNo%i==0)
		{
			iSum=iSum+i;
		}
	}

	if(iSum==iNo)
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
	
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	bRet=ChkPerfect(Value);
	
	if(bRet==TRUE)
	{
		printf("It is perfect number");
	}
	else
	{
		printf("It is not perfect number");
	}
	
	return 0;
}
