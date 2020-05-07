/*	Write a java program which accept matrix from user and return its transpose matrix.
The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.	*/


import java.io.*;
import java.util.Scanner;

class MyArray
{
	public int[][] Matrix(int iRow,int iCol,int arr[][])
	{
		int i,j,Temp;
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{	
				if(j>=i)
				{
					Temp=arr[i][j];
					arr[i][j]=arr[j][i];
					arr[j][i]=Temp;
				}
			}	
		}
		return arr;
		
	}
}

class Ass70_3
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

		System.out.println("Before swap Matrix");
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}

		MyArray aobj=new MyArray();
		int Brr[][]=aobj.Matrix(Row,Col,Arr);
			
		System.out.println("After swap Matrix");
		for(i=0;i<Brr.length;i++)
		{
			for(j=0;j<Brr[i].length;j++)
			{
				System.out.print(Brr[i][j]+"\t");
			}
			System.out.println();
		}		
	}
}
