/* Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer.
If bill amount is less than 500 then there is no discount , if bill amount is less than 1500
and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have
to return the amount after applying discount.

Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145 */

#include<stdio.h>

float Bill(int No)
{
	float fBill=0.0;
	if(No<=500)
	{
		fBill=No;
	}
	else if((No>500)&&(No<=1500))
	{
		fBill=No;
		fBill=(fBill-(No/100)*10);	
	}
	else if(No>1500)
	{
		fBill=No;
		fBill=(fBill-(No/100)*15);	
	}
	
	return fBill;		
}

int main()
{
	int Value=0,fRet=0.0;
	printf("Enter the Bill amount");
	scanf("%d",&Value);
	
	fRet=Bill(Value);
	printf("After Discount bill amount is %d",fRet);
	
	return 0;
}
