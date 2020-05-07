/*	Write Java program which accept two arrays from user and display summation of each array.
Input	:	2	9	7	5	2	3
			8	4	3	6	5	


Output:	28	
			26			*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public void SumArray(int arr1[], int arr2[])
	{
		int i,Sum=0;
		
		for(i=0;i<arr1.length;i++)
		{
			Sum=Sum+arr1[i];
		}
		System.out.println("Summation of First Array "+Sum);
		Sum=0;
		for(i=0;i<arr2.length;i++)
		{
			Sum=Sum+arr2[i];
		}
		System.out.println("Summation of Second Array "+Sum);
	}
}

class Ass66_5
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
		Aobj.SumArray(Arr,Brr);
		
	}

}
