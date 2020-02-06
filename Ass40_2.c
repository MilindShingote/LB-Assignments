/*	Write a program which number from user and display below pattern.
Input : 7846 
Output : 
			7 8 4 6
			7 8 4 6
			7 8 4 6
			7 8 4 6	*/

#include<stdio.h>

void Pattern(int iNo)
{
	int Temp=iNo;
	int iCnt=0,i=0;
	int iNo1=0,iDigit=0;
	while(iNo!=0)
	{
		iCnt++;
		iDigit=iNo%10;
		iNo1=(iNo1*10)+iDigit;
		iNo=iNo/10;
	}
	Temp=iNo1;
	for(i=1;i<=iCnt;i++)
	{
		while(iNo1!=0)
		{
			printf("%d\t",iNo1%10);
			iNo1=iNo1/10;
		}
		printf("\n");
		iNo1=Temp;
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
