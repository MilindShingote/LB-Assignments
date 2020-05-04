/*	Write a program which 2 strings from user and check whether contents of two strings are equal or not.
Input :	“Marvellous Infosystems”
			“Marvellous Infosystems”
Output :	TRUE	*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public boolean StrCmpX(String src, String dest)
	{
		int i=0;
		
		if(src.length()!=dest.length())
		{
			return false;
		}
		else
		{
			for(i=0;i<src.length();i++)
			{
				if(src.charAt(i)!=dest.charAt(i))
				{
					break;
				}
			}
		}
		
		if(i==src.length())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Ass60_2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str1,str2;
		boolean bRet=false;
		System.out.println("Enter First String");
		str1=sobj.nextLine();
		
		System.out.println("Enter Second String");
		str2=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		bRet=dobj.StrCmpX(str1,str2);
		
		if(bRet==true)
		{
			System.out.println("Strings are palindrom");
		}
		else
		{
			System.out.println("Strings are not palindrom");
		}
	}
}
