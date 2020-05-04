/*	Write a Java program which accept string from user and count
number of capital characters.
Input : “Marvellous Multi OS”
Output : 4		*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public int CountCapital(String str)
	{
		int iCnt=0,i;
		for(i=0;i<str.length();i++)
		{
			if((str.charAt(i)>='A')&&(str.charAt(i)<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Ass56_1
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter String");
		String Str=sobj.nextLine();
		StringDemo dobj=null;
		dobj=new StringDemo();
		int iRet=0;
		iRet=dobj.CountCapital(Str);
		System.out.println("Capital Character count is: "+iRet);
	}
}
		
