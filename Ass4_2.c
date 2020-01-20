/*Design application for income tax department to calculate tax amount. According to the
income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.

Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000)
Input : 8200000 Output : 2110000 (0 + 50000 + 200000 + 1860000)*/

#include<stdio.h>

float DisplayTax(int No)
{
	float Tax=0.0;
	float fNo=0.0;
	if((No>500000)&&(No<=1000000))
	{
		fNo=No-500000;
		Tax=(fNo/100)*10;	
		
	}
	else if((No>1000000)&&(No<=2000000))
	{
		Tax=50000+(((No-1000000)/100)*20);
	}
	else if(No>2000000)
	{
		Tax=50000+200000+(((No-2000000)/100)*30);
	}
	return Tax;
}

int main()
{
	int Value=0;
	float fRet=0.0;
	printf("Enter the value");
	scanf("%d",&Value);
	
	fRet=DisplayTax(Value);
	printf("The Tax of amount%d is %f",Value,fRet);
	return 0;
}
	
