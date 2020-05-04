/*	Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 3		iCol = 5
Output:	A	A	A	A	A
			B	B	B	B	B
			C	C	C	C	C	*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i,j;
		char Temp='A';
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print(Temp+"\t");
			}
			Temp++;
			System.out.println();
		}		
	}
}

class Ass61_3
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
