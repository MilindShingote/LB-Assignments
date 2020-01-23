/*Write a program which accept total marks & obtained marks from user and
calculate percentage.
Input : 1000	745
Output:75.00%	*/

#include<stdio.h>
float Percentage(int Total,int Marks)
{
	float Ans=0.0;
	
	Ans=(Marks*100)/Total;
	printf("%f",Ans);	
	return Ans;
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet = 0.0;
	printf("Please enter Total Marks");
	scanf("%d",&iValue1);
	
	printf("Please enter obtained Marks");
	scanf("%d",&iValue2);

	fRet = Percentage(iValue1,iValue2);
	printf("Percentage is %f",fRet);
	return 0;
}	
