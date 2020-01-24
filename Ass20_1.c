/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 4
Output : 
			*	*	*	#	
			*	*	#	*	
			*	#	*	*	
			#	*	*	*							
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	int iCnt=iCol;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(j==iCnt)		
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
		iCnt=iCnt-1;
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
