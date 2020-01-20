/* We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73
Input : 132
Input : 189
Output : 1825
Output : 2980
Output : 3835		*/

#include<stdio.h>
int TouristBill(int Km)
{
	int Ans=0;
	if(Km<0)	
	{
		Km=-Km;
	}
	
	if(Km<=100)
	{
		Ans=Km*25;
	}
	else if(Km>100)
	{
		Ans=2500+((Km-100)*15);
	}
	return Ans;
}

int main()
{
	int Value=0,iRet=0;
	printf("Enter the Kilometer");
	scanf("%d",&Value);
	
	iRet=TouristBill(Value);
	printf("The Estimated rent is %d",iRet);
	return 0;
}
