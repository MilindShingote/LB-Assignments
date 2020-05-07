/*	Write a java program which accept matrix from user and return addition of border elements of matrix.	*/


import java.io.*;
import java.util.Scanner;

class MyArray
{
	public int AddMatrix(int iRow,int iCol,int arr[][])
	{
		int i,j,Sum=0;
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{	
				if((i==0)||(j==0)||(i==iRow-1)||(j==iCol-1))
				{
					Sum=Sum+arr[i][j];
				}
			}	
		}
		
		return Sum;	
	}
}

class Ass70_5
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

		System.out.println("Matrix is");
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}

		MyArray aobj=new MyArray();
		int iSum=aobj.AddMatrix(Row,Col,Arr);
		System.out.println("Sum of Given Matrix border is "+iSum);

	}
}
