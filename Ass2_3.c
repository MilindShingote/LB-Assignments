/*Accept number from user and return it's largest factor.
Input	:	12
Output:	6	 */

#include<stdio.h>
int MaxFactor(int No)
{
	int i=0;
	int iMax=0;
	
	if(No<0)	//Updater
	{
		No=-No;
	}
	for(i=1;i<=No/2;i++)
	{
		if(No%i==0)
		{
			if(i>iMax)
			{
				iMax=i;
			}
		}
	}
	return iMax;
}

int main()
{
	int Value=0,iRet=0;
	
	printf("Enter the Number:");
	scanf("%d",&Value);
	
	iRet=MaxFactor(Value);
	printf("Largest factor is %d\n",iRet);
	
	return 0;
}
