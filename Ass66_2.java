/*	Write Java program which accept two arrays from user and display even contents of each array.

Input	:	2	9	7	5	2	3
			8	4	3	6	5	


Output:	2	2	3
			8	4	6		*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public void Display(int arr1[], int arr2[])
	{
		int i;
		System.out.println("Even Elements of First array");
		for(i=0;i<arr1.length;i++)
		{
			if(arr1[i]%2==0)
			{
				System.out.print(arr1[i]+"\t");	
			}
		}
		
		System.out.println("\nEven Elements of Second array");
		for(i=0;i<arr2.length;i++)
		{
			if(arr2[i]%2==0)
			{
				System.out.print(arr2[i]+"\t");
			}
		}
	}
}

class Ass66_2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of First Array");
		Size=sobj.nextInt();
		
		int Arr[]=new int[Size];
		System.out.println("Enter elements of array");
		
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.nextInt();
		}
		
		System.out.println("Enter the Size of Second Array");
		Size=sobj.nextInt();
		
		int Brr[]=new int[Size];
		System.out.println("Enter elements of array");
		
		for(i=0;i<Brr.length;i++)
		{		
			Brr[i]=sobj.nextInt();
		}

		MyArray Aobj=new MyArray();
		Aobj.Display(Arr,Brr);
	}

}
