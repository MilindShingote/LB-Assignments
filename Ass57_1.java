/*	1. Write Java program which accept N numbers from user and return
difference between summation of even elements and summation of
odd elements.
Input :	N :	6
			Elements :	85	66	3	80	93	88	
Output :	53	(234 - 181)	*/

import java.io.*;
import java.util.Scanner;

class ArrayDemo
{
	public int Diff(int Brr[])
	{
		int Odd=0,Even=0,i;
			
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]%2==0)
			{
				Even=Even+Brr[i];
			}
			else
			{
				Odd=Odd+Brr[i];
			}
		}
		return Even-Odd;
	}
}

class Ass57_1
{
	public static void main(String arg[])
	{	
		Scanner sobj=new Scanner(System.in);
		int Size,i,iRet;
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		int Arr[]=new int[Size];
		
		System.out.println("Enter the Element of array");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		ArrayDemo dobj=new ArrayDemo();
		iRet=dobj.Diff(Arr);
		System.out.println("Diff bet sum of even and odd elements id : "+iRet);
	}
} 
		
		
