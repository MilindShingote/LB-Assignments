/*	Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4	iCol = 4
Output : 
			A	B	C	D
			A	B	C	D
			A	B	C	D
			A	B	C	D
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char Ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",Ch);
			Ch=Ch+1;
		}
		printf("\n");
		Ch='A';
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
