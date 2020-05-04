/*	1. Write Java program which accept N numbers from user and display all such elements which are divisible by 5.
Input :	N :	6
			Elements :	85	66	3	80	93	88	
Output :	85	80	*/

import java.io.*;
import java.util.Scanner;

class ArrayDemo
{
	public void Display(int Brr[])
	{
		int Odd=0,Even=0,i;
			
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]%5==0)
			{
				System.out.print(Brr[i]+"\t");
			}
		}
	}
}

class Ass57_2
{
	public static void main(String arg[])
	{	
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		int Arr[]=new int[Size];
		
		System.out.println("Enter the Element of array");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		ArrayDemo dobj=new ArrayDemo();
		dobj.Display(Arr);

	}
} 
		
		
