/*		Write a java program which accept string from user and check whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE		*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public boolean ChkVowel(String str)
	{
		int i;
		boolean Flag=false;
		for(i=0;i<str.length();i++)
		{
			if((str.charAt(i)=='a')||(str.charAt(i)=='e')||(str.charAt(i)=='i')||(str.charAt(i)=='o')||(str.charAt(i)=='u'))
			{
				Flag=true;
				break;
			}
			else if((str.charAt(i)=='A')||(str.charAt(i)=='E')||(str.charAt(i)=='I')||(str.charAt(i)=='O')||(str.charAt(i)=='U'))
			{
				Flag=true;
				break;
			}
		}
		
		return Flag;
	}
}

class Ass56_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		boolean bRet=false;
		System.out.println("Enter String");
		String Str=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		bRet=dobj.ChkVowel(Str);
		
		if(bRet==true)
		{
			System.out.println("It Contains Vowel");
		}
		else
		{
			System.out.println("It Contains no Vowel");
		}
	}
}
