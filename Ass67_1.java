/*	Write a java program which accept two arrays from user and return difference between summation of arrays.
Input	:	2	9	7	5	2	3
			9	3	5	5	


Output:	6		*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public int DiffArray(int arr1[], int arr2[])
	{
		int i,Sum1=0,Sum2=0;;
		
		for(i=0;i<arr1.length;i++)
		{
			Sum1=Sum1+arr1[i];
		}
		
		for(i=0;i<arr2.length;i++)
		{
			Sum2=Sum2+arr2[i];
		}
		return Sum1-Sum2;
	}
}

class Ass67_1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i,Diff;
		
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
		Diff=Aobj.DiffArray(Arr,Brr);
		System.out.println("Diff is "+Diff);
	}

}
