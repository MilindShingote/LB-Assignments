/*	Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input :	5
Output : 0.464515
Input :	7
Output : 0.650321	*/

#include<stdio.h>

double SquareMeter(int iValue)
{
	double Ans;
	Ans=iValue*0.0929;
	return Ans;
}

int main()
{
	int Value=0;
	double dRet=0.0;
	
	printf("Enter the area in square feet");
	scanf("%d",&Value);
	
	dRet=SquareMeter(Value);
	printf("Area in Square %lf",dRet);

	return 0;
}
