/*	Write java program which accept array from user and replace each member with summation of its digit.

Input :	89 687 56 549 87 9

Output : 17	21	11	18	15	9	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	public void SumArray(int arr[])
	{
		int i=0,iDigit,Sum;
		
		for(i=0;i<arr.length;i++)
		{
			Sum=0;
			while(arr[i]!=0)
			{
				iDigit=arr[i]%10;
				Sum=Sum+iDigit;
				arr[i]=arr[i]/10;
			}
			arr[i]=Sum;
			Sum=0;
		}
		
		for(i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
		System.out.println();
	}
}

class Ass68_2
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
		Aobj.SumArray(Arr);
	}

}	
