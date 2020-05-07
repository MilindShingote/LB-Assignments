/*	Write a java program which accept matrix from user and trace and normal of given matrix.
Here trace of the matrix is the sum of the elements of the main diagonal i.e the diagonal from the upper left to the lower right of a matrix. Normal of the matrix is the square root of the sum of all the elements.	*/


import java.io.*;
import java.util.Scanner;

class MyArray
{
	public void Matrix(int iRow,int iCol,int arr[][])
	{
		int i,j,Norm=0,Trace=0;
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{	
				if(i==j)
				{
					Trace=Trace+arr[i][j];
				}
			}	
		}
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{	
					Norm=Norm+(arr[i][j]*arr[i][j]);
			}	
		}
		Norm=(int)Math.sqrt(Norm);
		System.out.println("Trace of given Matrix "+Trace);
		System.out.println("Normal of given Matrix "+Norm);
	
	}
}

class Ass70_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Row,Col,i,j;	
		System.out.println("Enter the size of Row and Column");
		Row=sobj.nextInt();
		Col=sobj.nextInt();
		
		if(Row!=Col)
		{
			System.out.println("Enter the Correct size of Row and Column");
			return ;
		}
		
		int Arr[][]=new int[Row][Col];
		System.out.println("Enter the Element of Array");
		for(i=0;i<Arr.length;i++)
		{			
			for(j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}

		System.out.println(" Matrix is");
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}

		MyArray aobj=new MyArray();
		aobj.Matrix(Row,Col,Arr);
			
	}
}
