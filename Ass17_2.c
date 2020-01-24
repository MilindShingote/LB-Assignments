/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 4
Output : 
			2	4	6	8	
			1	3	5	7		
			2	4	6	8	
			1	3	5	7	
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	int iCnt=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2!=0)
			{
				printf("%d\t",j*2);
			}
			else
			{
				printf("%d\t",iCnt);
				iCnt=iCnt+2;
			}			
		}
		printf("\n");
		iCnt=1;
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
