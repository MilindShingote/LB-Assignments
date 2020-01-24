/*Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input :	23	30
Output : 108	*/

#include<stdio.h>
int RangeDisplay(int iStart , int iEnd)
{
	int i=0,iSum=0;
	if(iStart>iEnd)
	{
		printf("Invalid Input");
		return -1;
	}
	for(i=iStart;i<=iEnd;i++)
	{
		if(i%2==0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}

int main()
{
	int Value1=0,Value2=0;
	int iRet=0;
	printf("Enter Range");
	scanf("%d%d",&Value1,&Value2);
	
	iRet=RangeDisplay(Value1,Value2);
	printf("%d",iRet);
	return 0;
}
