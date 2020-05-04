/*	Write a java program which accept string from user and display
it in reverse order.
Input : "MarvellouS"
Output : "SuollevraM"		*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public void Reverse(String str)
	{
		int i;
		System.out.print("Reverse String is\t");
		for(i=str.length()-1;i>=0;i--)
		{
			System.out.print(str.charAt(i));
		}
		System.out.println();
	}
}

class Ass56_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter String");
		String Str=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		dobj.Reverse(Str);
		
	}
}
