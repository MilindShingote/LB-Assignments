/*	Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 4		iCol = 4

Output:	*	*	*	#
			*	*	#	*
			*	#	*	*
			#	*	*	*
*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(int iRow,int iCol)
	{
		int i,j;
		int Temp=iCol-1;
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(j==Temp)
				{
					System.out.print("#\t");
				}
				else if(j<Temp)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("@\t");
				}
			}
			Temp--;
			System.out.println();
			System.out.println();
		}		
	}
}

class Ass65_2
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
