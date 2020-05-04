/*	Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
Input :	“Marvellous Infosystems”
			“Marvellous Logic Building”
			10
Output :	TRUE*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public boolean StrNCmpX(String src, String dest ,int iCnt)
	{
		int i=0,Temp=0;
		
		if(src.length()>dest.length())
		{
			for(i=0;i<dest.length()&&iCnt<Temp;i++)
			{
				if(src.charAt(i)!=dest.charAt(i))
				{
					break;
				}
			}
		}
		else
		{
			for(i=0;i<src.length()&&iCnt<Temp;i++)
			{
				if(src.charAt(i)!=dest.charAt(i))
				{
					break;
				}
			}
		}

		if((i==src.length())||(i==dest.length())||(i==Temp))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Ass60_3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str1,str2;
		int No;
		boolean bRet=false;
		System.out.println("Enter First String");
		str1=sobj.nextLine();
		
		System.out.println("Enter Second String");
		str2=sobj.nextLine();
		
		System.out.println("Enter Number");
		No=sobj.nextInt();

		StringDemo dobj=new StringDemo();
		bRet=dobj.StrNCmpX(str1,str2,No);
		
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
