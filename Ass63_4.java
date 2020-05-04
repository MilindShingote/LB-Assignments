/*	Write Java program which accept String from user and display below pattern.

Input : Hello

Output:	H	e	l	l	o
			H	e	l	l	
			H	e	l	
			H	e
			H
			H	e
			H	e	l
			H	e	l	l
			H	e	l	l	o			
*/

import java.io.*;
import java.util.Scanner;

class Pattern
{
	public void Pattern(String str)
	{
		int iCnt=str.length();
		int i=0,j=0;
		int Temp=iCnt;
			
		for(i=1;i<iCnt;i++)
		{
			for(j=0;j<Temp;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			Temp--;
			System.out.println();
		}
		
		for(i=1;i<=iCnt;i++)
		{
			for(j=0;j<i;j++)
			{
				System.out.print(str.charAt(j)+"\t");
			}
			System.out.println();
		}
	}
}

class Ass63_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter String");
		String Str=sobj.nextLine();
		
		Pattern pobj=new Pattern();
		pobj.Pattern(Str);
		
	}
}
