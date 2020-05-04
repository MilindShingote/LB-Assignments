/*	Write java program which accept N numbers from user and return product of all odd elements.
Input :	N : 6
			Elements : 15	66	3	70	10	88
			Output : 45

Input : 	N :	6
			Elements : 44	66	72	70	10	88	
			output:	0		*/

import java.io.*;
import java.util.Scanner;

class Number
{
	public int Product(int Arr[])
	{
		int i,Mult=1;
		
		for(i=0;i<Arr.length;i++)	
		{
			if(Arr[i]%2!=0)
			{
				Mult=Mult*Arr[i];
			}
		}
		if(Mult==1)
		{
			return 0;
		}
		else
		{
			return Mult;
		}
	}
}	

class Ass59_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i,iRet;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		int Arr[]=new int[Size];

		System.out.println("Enter the Elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		Number nobj=new Number();
		iRet=nobj.Product(Arr);
		System.out.println("Product of all odd element "+iRet);
	}
}
		
