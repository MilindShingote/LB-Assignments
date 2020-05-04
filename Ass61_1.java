/*	Write Java program which accept number of rows and number of columns
from user and display below pattern.
Input : iRow = 4		iCol = 4
Output:	A	B	C	D
			A	B	C	D
			A	B	C	D
			A	B	C	D	*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i,j;
		char Temp;
		
		for(i=0;i<iRow;i++)
		{
			Temp='A';
			for(j=0;j<iCol;j++)
			{
				System.out.print(Temp+"\t");
				Temp++;
			}
			System.out.println();
		}		
	}
}

class Ass61_1
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
