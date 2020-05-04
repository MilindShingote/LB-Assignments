/*	Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not.
Input :	N : 6
			NO: 66
			Elements : 85	66 3 66 93 88
			Output : TRUE	

Input : 	N : 6
			NO: 12
			Elements : 85	11 3 15 11 111
			Output :	FALSE		*/

import java.io.*;
import java.util.Scanner;

class Number
{
	boolean Check(int Brr[], int iNo)
	{
		int i;
		
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]==iNo)	
			{
				break;
			}
		}
		
		if(Brr.length==i)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}	

class Ass59_1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,No,i;
		boolean bRet=false;
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		int Arr[]=new int[Size];

		System.out.println("Enter the Elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enter Search Element");
		No=sobj.nextInt();

		Number nobj=new Number();
		bRet=nobj.Check(Arr,No);
		
		if(bRet==true)
		{
			System.out.println("Element is present in Array");
		}
		else
		{
			System.out.println("Element is not present in Array");
		}
	}
}
		
