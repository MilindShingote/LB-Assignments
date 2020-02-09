/*Write a recursive program which accept number from user and return its reverse number.
Input : 523
Output : 325		*/

#include<stdio.h>
int Reverse(int iNo)
{
	static int Rev=0;
	
	if(iNo!=0)
	{
		Rev=(Rev*10)+(iNo%10);
		
		iNo=iNo/10;
		Rev=Reverse(iNo);
	}
	return Rev;
}
int main()
{
	int Value=0;
	int iRet=0;
	
	printf("Enter the Value");
	scanf("%d",&Value);
	
	iRet=Reverse(Value);
	printf("The Reverse number is %d",iRet);
	
	return 0;
}
