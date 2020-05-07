/*	Write a java program which accept array from user and reverse it and return.		*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public int[] CopyArrayRev(int arr[])
	{
		int i=0,End,Temp;
		End=arr.length-1;
		while(i<End)					
		{
			Temp=arr[i];
			arr[i]=arr[End];
			arr[End]=Temp;
			i++;
			End--;
		}
		return arr;
	}
}

class Ass67_4
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
