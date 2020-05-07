/*	Write Java program which accept two arrays from user and form new array which is combination of contents of first and second array.

Input	:	2	9	7	5	2	3
			8	4	3	6	5	


Output:	2	9	7	5	2	3	8	4	3	6	5		*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	public int[] ArrayConcate(int arr1[],int arr2[])
	{
		int i,Temp;
		int Brr[]=new int[arr1.length+arr2.length];
		
		for(i=0;i<arr1.length;i++)
		{
			Brr[i]=arr1[i];
		}
		Temp=arr1.length;
		
		for(i=0;i<arr2.length;i++)
		{
			Brr[Temp]=arr2[i];
			Temp++;
		}
		return Brr;
	}
}

class Ass66_4
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
		int Crr[]=Aobj.ArrayConcate(Arr,Brr);
		System.out.println("After Concate");
	
		for(i=0;i<Crr.length;i++)
		{		
			System.out.print(Crr[i]+"\t");
		}
		
	}

}
