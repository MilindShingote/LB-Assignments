/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 4
Output : 
			 1	 2	 3	 4	 5			
			-1	-2	-3	-4	-5	
			 1	 2	 3	 4	 5
			-1	-2	-3	-4	-5
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='a';
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2!=0)
			{
				printf(" %d\t",j);
			}
			else
			{
				printf("%d\t",-j);
			}
			ch=ch+1;			
		}
		printf("\n");
		ch='a';
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
