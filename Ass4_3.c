/*Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input : 2		Output : 12790

Input : 4		Output : 23450

Input : 6		Output : Wrong input */

#include<stdio.h>

void Display(int No)
{
	if(No>4) //Filter
	{
		printf("Invalid Input");
		return;
	}
	if(No<0) //Updater
	{
		No=-No;	
	}
	
	if(No==1)
	{
		printf("The first standard fees are 8900");
	}
	else if(No==2)
	{
		printf("The second standard fees are 12790");
	}
	else if(No==3)
	{
		printf("The third standard fees are 21000");
	}
	else if(No==4)
	{
		printf("The fourth standard fees are 23450");
	}
}

int main()
{
	int Value=0;
	printf("Enter the class Name");
	scanf("%d",&Value);
	
	Display(Value);
	
	return 0;
}



