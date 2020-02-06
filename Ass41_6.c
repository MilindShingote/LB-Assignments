/*	Write a program which number from user and display below pattern.
Input : 7846
	
Output:	6	#	#	#	#	#	
			4	#	#	#	
			8	#	#	#	#	#	#	#	
			7	#	#	#	#	#	#			*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0,i=0,j=0;
	int iCnt1=0,Temp=iNo;
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
			for(j=iNo%10;j>=1;j--)
			{
				iCnt1++;
				if(iCnt1==1)
				{
					printf("%d\t",j);
				}
				else
				{
					printf("#\t");
				}
			}
			printf("\n");
			iNo=iNo/10;
			iCnt1=0;
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
