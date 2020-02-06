/*	Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.

Input :	11
Output:	3		*/
#include<stdio.h>
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
	int iCnt=0;
	UINT iMask=0,iRet=0;
	iMask=1;
	
	while(iNo!=0)
	{
		iRet=iMask&iNo;
		if(iRet==1)
		{
			iCnt++;
		}
		iNo=iNo>>1;
	}
	return iCnt;
}
int main()
{
	UINT Value=0;	
	int iRet=0;
	printf("Enter the number");
	scanf("%d",&Value);
	
	iRet=CountOne(Value);
	printf("%d\n",iRet);
	
	return 0;
}
