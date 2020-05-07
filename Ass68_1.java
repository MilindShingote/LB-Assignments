/*	Write java program which accept array from user and reverse each number of that array.

Input :	89 687 56 549 87 9

Output : 98 786 65 945 78 9	*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public void ReverseArray(int arr[])
	{
		int i=0,iDigit,Rev=0;
		
		for(i=0;i<arr.length;i++)
		{
			while(arr[i]!=0)
			{
				iDigit=arr[i]%10;
				Rev=(Rev*10)+iDigit;
				arr[i]=arr[i]/10;
			}
			arr[i]=Rev;
			Rev=0;
		}
		
		for(i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");
		}
		System.out.println();
	}
}

class Ass68_1
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
		Aobj.ReverseArray(Arr);
	}

}	
