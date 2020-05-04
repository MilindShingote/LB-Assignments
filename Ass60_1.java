/*	Write a java program which accepts 2 strings from user and	concat N characters of second string after first string.Value of N
should be accepted from user.
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input :	“Marvellous Infosystems”
			“Logic Building”
			5
Output :	“Marvellous Infosystems Logic”	*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public String StrNCatX(String src, String dest, int iCnt)
	{
		int i=0,Temp;	
			
		char Arr[]=src.toCharArray();
		char Brr[]=dest.toCharArray();
		char Crr[]=new char[src.length()+dest.length()];
	
		if(dest.length()<iCnt)
		{	
			for(i=0;i<Arr.length;i++)
			{
				Crr[i]=Arr[i];
			}
			Temp=i;			
			for(i=0;i<dest.length();i++)
			{
				Crr[Temp]=Brr[i];
				Temp++;
			}
		}
		else
		{
			for(i=0;i<Arr.length;i++)
			{
				Crr[i]=Arr[i];
			}
			Temp=i;
			for(i=0;i<iCnt;i++)
			{
				Crr[Temp]=Brr[i];
				Temp++;
			}
		}
		String str1=new String(Crr);
		return str1;
	}
}

class Ass60_1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str1,str2,str3;
		int No;
		System.out.println("Enter First String");
		str1=sobj.nextLine();
		
		System.out.println("Enter Second String");
		str2=sobj.nextLine();
		
		System.out.println("Enter Number");
		No=sobj.nextInt();

		StringDemo dobj=new StringDemo();
		str3=dobj.StrNCatX(str1,str2,No);
		
		System.out.println(str3);
	}
}
