/*Write Java program which accept array from user and display below pattern.

Input :	8	7	6	4	2	4

Output : 
			*	*	*	*	*	*	*	*
			*	*	*	*	*	*	*
			*	*	*	*	*	*	
			*	*	*	*	
			*	*	
			*	*	*	*	
*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	void Pattern(int arr[])
	{
		int i,j;
			
		for(i=0;i<arr.length;i++)
		{
			for(j=1;j<=arr[i];j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}	
	}
}

class Ass69_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		int Arr[]=new int[Size];
		System.out.println("Enter elements of array");
			
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.nextInt();
		}

		MyArray Aobj=new MyArray();
		Aobj.Pattern(Arr);
		
	}

}	
