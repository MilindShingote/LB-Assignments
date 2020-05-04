/*	Write a java program which accept string from user and return
difference between frequency of small characters and frequency
of capital characters.

Input : “MarvellouS”
Output : 6	(8-2)	*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public int CountDiff(String str)
	{
		int Small=0,Cap=0,i;
		
		for(i=0;i<str.length();i++)
		{
			if((str.charAt(i)>='a')&&(str.charAt(i)<='z'))
			{
				Small++;
			}
			else if((str.charAt(i)>='A')&&(str.charAt(i)<='Z'))
			{
				Cap++;
			}
		}
		return Small-Cap;
	}
}


class Ass56_3
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter String");
		String Str=sobj.nextLine();
		StringDemo dobj=null;
		dobj=new StringDemo();
		int iRet=0;
		iRet=dobj.CountDiff(Str);
		System.out.println("Diff betn freq of small characters and capital characters: "+iRet);
	}
}
		

