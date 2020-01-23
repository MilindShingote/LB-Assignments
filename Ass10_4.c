/*	Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input :	10
Output : -12.2222 (10 - 32) * (5/9)
Input :	34
Output : 1.11111 (34 - 32) * (5/9)	*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
	double Ans=0.0;
	Ans=(fTemp-32)*0.555555556;
	return Ans;
}

int main()
{
	float fValue=0;
	double dRet;
	printf("Enter the Temperature in Fahrenheit:");
	scanf("%f",&fValue);
	
	dRet=FhtoCs(fValue);
	printf("Temperature in celsius %lf",dRet);
	
	return 0;
	
}
