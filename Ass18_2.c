/*	Accept number of rows and number of columns from user and displa below pattern.
Input : iRow = 4	iCol = 4
Output : 
			*	*	*	*	
			*	*	*	#	
			*	*	#	#	
			*	#	#	#			
*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	int iCnt=0;
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(j>=iCol-i)		
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
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
