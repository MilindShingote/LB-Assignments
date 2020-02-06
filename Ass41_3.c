/*	Write a program which number from user and display below pattern.
Input : 7846 
Output : 
			1	2	3	4	5	6	7	
			1	2	3	4	5	6	7	8	
			1	2	3	4		
			1	2	3	4	5	6				*/

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
			for(j=1;j<=iNo1%10;j++)
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
