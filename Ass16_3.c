/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 3	iCol = 5
Output : 
			A	A	A	A	A
			B	B	B	B	B
			C	C	C	C	C
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
		}
		printf("\n");
		Ch=Ch+1;
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
