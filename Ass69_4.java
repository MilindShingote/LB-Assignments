/*Write Java program which accept array of characters from user and return difference between frequency of capital and frequency of small 
characters.

Input :	b	N	e	B	R	b	A	I	O	G	i

Output : 3	(7-4)	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	int Diffrence(char arr[])
	{
		int i,iSmall=0,iCapital=0;
			
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				iCapital++;	
			}
			else if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iSmall++;
			}
		}
		return iCapital-iSmall;
	}
}

class Ass69_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		char Arr[]=new char[Size];
		System.out.println("Enter elements of array");
			
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.next().charAt(0);
		}

		MyArray Aobj=new MyArray();
		int iRet=Aobj.Diffrence(Arr);
		System.out.println("Diff between small and Capital character is "+iRet);
	}

}	
