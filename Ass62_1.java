/*	Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 4		iCol = 3

Output:	*	*	*
			*	*	*
			*	*	*
			*	*	*		
	*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i,j;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}		
	}
}

class Ass62_1
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
