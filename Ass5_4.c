/*Write a program which accept number from user and return summation of all its non factors.
Input :	12
Output:	50 */

#include<stdio.h>
int SumNonFact(int iNo)
{
	int i=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}

int main()
{
	int Value=0,iRet=0;
	printf("Enter the Value");
	scanf("%d",&Value);

	iRet = SumNonFact(Value);
	printf("%d",iRet);
	return 0;
}
