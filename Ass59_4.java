/*	Write java program which accept N numbers from user and accept Range, Display all elements from that range
Input :	N : 6
			Start: 60
			End : 90
			Elements : 85	66 3 76 93 88
			Output : 85	66	76	88	

Input : 	N : 6
			Start: 30
			End : 50			
			Elements : 85	66 3 76 93 88
			Output :		*/

import java.io.*;
import java.util.Scanner;

class Number
{
	void Display(int Brr[], int Start,int End)
	{
		int i;
		
		if(Start>End)
		{
			return;
		}
		for(i=0;i<Brr.length;i++)
		{
			if((Brr[i]>Start)&&(Brr[i]<End))
			{
				System.out.print(Brr[i]+"\t");
			}
		}
		
	}
}	

class Ass59_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,No1,No2,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		int Arr[]=new int[Size];

		System.out.println("Enter the Elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enter Range");
		No1=sobj.nextInt();
		No2=sobj.nextInt();
		
		Number nobj=new Number();
		nobj.Display(Arr,No1,No2);
		
	}
}
		
