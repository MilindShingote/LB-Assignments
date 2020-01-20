//////////////////////////////////////
//	Name		:	Divisible				//
//	Input		:	Integer					//
//	Output	:	Boolean					//
//	Description:Devide two numbers.	//
//	Author	:	Milind Shingote		//
//	Date		:	03/07/2019				//
//////////////////////////////////////

//Program to devides two numbers.

#include<stdio.h>
int Div(int No1,int No2)
{
	if(No2==0)
	{
		return -1;
	}
	return No1/No2;	
}

int main()
{
	int Value1=0,Value2=0;
	int iRet=0;
	printf("Enter the first Number:");
	scanf("%d",&Value1);
	
	printf("Enter the second Number:");
	scanf("%d",&Value2);
	
	iRet=Div(Value1,Value2);
	if(iRet==-1)
	{
		printf("ERROR: Please enter correct value.\n");
	}
	else
	{
		printf("Division of two numbers is: %d",iRet);
	}
	return 0;
}
