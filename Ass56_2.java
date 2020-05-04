/*	Write a java program which accept string from user and count
number of small characters.
Input : “Marvellous”
Output : 9		*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public int CountSmall(String str)
	{
		int iCnt=0,i;
		for(i=0;i<str.length();i++)
		{
			if((str.charAt(i)>='a')&&(str.charAt(i)<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Ass56_2
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.print("Enter String");
		String Str=sobj.nextLine();
		StringDemo dobj=null;
		dobj=new StringDemo();
		int iRet=0;
		iRet=dobj.CountSmall(Str);
		System.out.println("Small Character count is: "+iRet);
	}
}
		
