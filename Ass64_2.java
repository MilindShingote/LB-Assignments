/*	Write Java program which accept String from user and display below pattern.

Input : Hello

Output:	H	e	l	l	o
			H	e	l	l	*
			H	e	l	*	*
			H	e	*	*	*
			H	*	*	*	*
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
		for(i=0;i<iCnt;i++)
		{
			for(j=0;j<iCnt;j++)
			{
				if(j>=Temp)
				{
					System.out.print("*\t");
				}
				else
				{	
					System.out.print(str.charAt(j)+"\t");
				}
			}
			Temp--;
			System.out.println();
		}
		
	}
}

class Ass64_2
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
