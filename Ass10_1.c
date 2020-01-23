/*	Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input :	5.3
Output : 88.2026
Input :	10.4
Output : 339.6224	*/

#include<stdio.h>
double CircleArea(float fRadius)
{
	float Area;
	
	if(fRadius<0)
	{
		fRadius=-fRadius;
	}
	Area=fRadius*fRadius*3.14;
	return Area;
}

int main()
{
	float fValue=0;
	double dRet;
	printf("Enter the Redius:");
	scanf("%f",&fValue);
	dRet=CircleArea(fValue);
	
	printf("Area is %lf",dRet);
	
	return 0;
}	
