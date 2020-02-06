/*	Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

Input :	10		15		(1010		1111)
Output:	2		4	*/
#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2)
{
	UINT iRet=iNo1&iNo2;
	int iCnt=0;
	UINT iMask=1;
	UINT uRet=0;
	while(iRet!=0)
	{
		iCnt++;
		uRet=iMask&iRet;
		if(uRet==iMask)
		{
			printf("%d\t",iCnt);
		}
		iRet=iRet>>1;
	}
	
}
int main()
{
	UINT Value1=0,Value2=0;	
	int iRet=0;
	printf("Enter the First number");
	scanf("%d",&Value1);
	
	printf("Enter the Second number");
	scanf("%d",&Value2);
	CommonBits(Value1,Value2);
	
	return 0;
}
