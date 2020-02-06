/*	Write a program which number from user and display below pattern.
Input : 7846 
Output : 
			6
			6 4 
			6 4 8
			6 4 8	7	*/

#include<stdio.h>

void Pattern(int iNo)
{
	int Temp=iNo;
	int iCnt=0,i=0,iCnt1=0;
	while(iNo!=0)
	{
		iCnt++;
		iNo=iNo/10;
	}
	iNo=Temp;
	for(i=1;i<=iCnt;i++)
	{
		while((iNo!=0)&&(iCnt1<i))
		{
			printf("%d\t",iNo%10);
			iNo=iNo/10;
			iCnt1++;
		}
		printf("\n");
		iNo=Temp;
		iCnt1=0;
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
