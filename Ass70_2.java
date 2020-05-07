//	Write a java program which accept matrix from user and swap the contents of each consecutive columns.


import java.io.*;
import java.util.Scanner;

class MyArray
{
	public void Matrix(int iRow,int iCol,int arr[][])
	{
		int i,j,Temp;
		
		if(iRow!=iCol)
		{
			System.out.println("Enter the Correct size of Row and Column");
			return;
		}

		System.out.println("Before swap Column");
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}
		
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j=j+2)
			{
				Temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=Temp;
			}
			
		}
		
		System.out.println("After swap Column");
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}
			System.out.println();
		}	
	}
}

class Ass70_2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Row,Col;	
		System.out.println("Enter the size of Row and Column");
		Row=sobj.nextInt();
		Col=sobj.nextInt();
		
		int Arr[][]=new int[Row][Col];
		System.out.println("Enter the Element of Array");
		for(int i=0;i<Arr.length;i++)
		{			
			for(int j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}

		MyArray aobj=new MyArray();
		aobj.Matrix(Row,Col,Arr);	
	}
}
