//Accept number from user and return the summation of it's factor.
#include<stdio.h>
int Sum(int No)
{
	int i=0;
	int iSum=0;
	
	if(No<0)	//Updater
	{
		No=-No;
	}
	for(i=1;i<=No/2;i++)
	{
		if(No%i==0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}

int main()
{
	int Value=0,iRet=0;
	
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	iRet=Sum(Value);
	printf("Summation of factor is %d",iRet);
	
	return 0;
}
