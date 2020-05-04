/*	Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 5		iCol = 5

Output:	1	2	3	4	5
			1	2			5
			1		3		5
			1			4	5
			1	2	3	4	5	
*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(int iRow,int iCol)
	{
		int i,j;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==iRow)||(i==1)||(j==1)||(j==iCol))
				{
					System.out.print(j+"\t");
				}
				else if(i==j)
				{
					System.out.print(j+"\t");
				}
				else
				{
					System.out.print("\t");
				}
			}
			
			System.out.println();
			System.out.println();
		}		
	}
}

class Ass65_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Row,Col;
		System.out.println("Enter the Size of row and Column");
		Row=sobj.nextInt();
		Col=sobj.nextInt();
		
		Pattern pobj=new Pattern();
		pobj.Pattern(Row,Col);
		
	}
}
