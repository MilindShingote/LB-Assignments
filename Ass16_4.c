/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 5
Output : 
			4	4	4	4	4	
			3	3	3	3	3	
			2	2	2	2	2
			1	1	1	1	1	
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);			
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
