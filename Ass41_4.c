/*	Write a program which number from user and display below pattern.
Input : 7846
	
Output:	7	6	5	4	3	2	1	
			8	7	6	5	4	3	2	1	
			4	3	2	1	
			6	5	4	3	2	1		*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0,i=0,j=0;
	int iNo1=0,iDigit=0;
	while(iNo!=0)
	{
		iCnt++;
		iDigit=iNo%10;
		iNo1=(iNo1*10)+iDigit;
		iNo=iNo/10;
	}
	for(i=1;i<=iCnt;i++)
	{
		while(iNo1!=0)
		{
			for(j=iNo1%10;j>=1;j--)
			{
				printf("%d\t",j);
			}
			printf("\n");
			iNo1=iNo1/10;
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
