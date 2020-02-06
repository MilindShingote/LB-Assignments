/*	Write a program which number from user and display below pattern.
Input : 7846 
Output : 
			* * * * * *
			* * * *
			* * * * * * * *
			* * * * * * *			*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0,i=0,j=0;
	int Temp=0;
	Temp=iNo;
	while(iNo!=0)
	{
		iCnt++;
		iNo=iNo/10;
	}
	iNo=Temp;
	for(i=1;i<=iCnt;i++)
	{
		while(iNo!=0)
		{
			for(j=1;j<=iNo%10;j++)
			{
				printf("*\t");
			}
			printf("\n");
			iNo=iNo/10;
		}
	}
}
	
int main()
{
	int iValue=0;
	printf("Enter the Number");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
