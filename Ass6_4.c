/*	Write a program which accept three numbers and print its multiplication.
Input : 5	4	7	
Output:	140	*/

#include<stdio.h>

int Multiply(int No1,int No2,int No3)
{
	int iMult=1;
	
	if((No1!=0)&&(No2!=0)&&(No3!=0))
	{
		iMult=No1*No2*No3;
	}
	else if((No1!=0)&&(No2==0)&&(No3==0))
	{
		iMult=No1;
	}
	else if((No1!=0)&&(No2!=0)&&(No3==0))
	{
		iMult=No1*No2;
	}
	else if((No1==0)&&(No2!=0)&&(No3==0))
	{
		iMult=No2;
	}
	else if((No1==0)&&(No2!=0)&&(No3!=0))
	{
		iMult=No2*No3;
	}
	else if((No1!=0)&&(No2!=0)&&(No3==0))
	{
		iMult=No1*No2;
	}
	else if((No1==0)&&(No2==0)&&(No3!=0))
	{
		iMult=No3;
	}
	else if((No1==0)&&(No2!=0)&&(No3!=0))
	{
		iMult=No2*No3;
	}
	else if((No1!=0)&&(No2==0)&&(No3!=0))
	{
		iMult=No1*No3;
	}
	return iMult;
}
int main()
{
	int Value1=0,Value2=0,Value3=0;
	int iRet=0;
	printf("Enter the first numbers");
	scanf("%d",&Value1);
	
	printf("Enter the second numbers");
	scanf("%d",&Value2);
		
	printf("Enter the third numbers");
	scanf("%d",&Value3);
	
	iRet=Multiply(Value1,Value2,Value3);
		
	printf("Multiplication is %d",iRet);
	return 0;
}
	
	
