/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 4
Output : 
			1	2	3	4	
			2	3	4	5	
			3	4	5	6	
			4	5	6	7	
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	int iCnt=0;
	for(i=1;i<=iRow;i++)
	{
		iCnt=i;
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iCnt);
			iCnt=iCnt+1;		
		}
		printf("\n");
	}
}
int main()
{
	int Value1=0,Value2=0;
	
	printf("Enter the Rows");
	scanf("%d",&Value1);
	
	printf("Enter the Columns");
	scanf("%d",&Value2);
	
	Pattern(Value1,Value2);	
	return 0;
}
