/*	Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input :	5
Output : 5000
Input :	12
Output : 12000	*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
	int Meter=0;
	
	Meter=iNo*1000;
	
	return Meter;
}

int main()
{
	int Value=0;
	int iRet=0;
	printf("Enter the kilometer");
	scanf("%d",&Value);
	
	iRet=KMtoMeter(Value);
	
	printf("The distance is %d meter.",iRet);
	
	return 0;
}
