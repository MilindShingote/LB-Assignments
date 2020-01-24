/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 5	iCol = 5
Output : 
			1	2	3	4	5	
			1	2			5	
			1		3		5	
			1			4	5	
			1	2	3	4	5						
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j)||(j==1)||(i==1)||(j==iCol)||(i==iRow))		
			{
				printf("%d\t",j);
			}
			else
			{
				printf("\t");
			}
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
