/*	Write a java program which accept two arrays from user and return difference between summation of arrays.
Input	:	2	9	7	5	2	3
			9	3	5	5	


Output:	2	3		*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public void MinArray(int arr1[],int arr2[])
	{
		int i=0,Min1,Min2;
		Min1=arr1[i];
		Min2=arr2[i];

		for(i=0;i<arr1.length;i++)
		{
			if(arr1[i]<Min1)
			{
				Min1=arr1[i];
			}
		}
		
		for(i=0;i<arr2.length;i++)
		{
			if(arr2[i]<Min2)
			{
				Min2=arr2[i];
			}
		}
		System.out.print("\nMinimum Element is"+Min1);	
		System.out.println("\nMinimum Element is"+Min2);
	}
}

class Ass67_2
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
		Aobj.MinArray(Arr,Brr);
		
	}

}	
