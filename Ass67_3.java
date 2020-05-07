/*	Write a java program which accept two array from user and copy the contents of that array into another array in reverse order and
return new array.		*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public int[] CopyArrayRev(int arr[])
	{
		int i=0,End;
		End=arr.length-1;
		int brr[]=new int[End+1];
		while(End>=0)					
		{
			brr[i]=arr[End];
			i++;
			End--;
		}
		return brr;
	}
}

class Ass67_3
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
		int Brr[]=Aobj.CopyArrayRev(Arr);

		System.out.println("After Reverse");
		for(i=0;i<Brr.length;i++)
		{		
			System.out.print(Brr[i]+"\t");
		}
	}

}	
