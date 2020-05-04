/*	Accept string from user and check whether the string is palindrome or not without considering its case.
Input : “1abccBA1”
Output : TRUE	*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public boolean StrPallindrome(String str)
	{
		int i=0,End;
		char Arr[]=str.toCharArray();
		End=Arr.length-1;
		char Temp;
		while(i<End)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z')&&(Arr[End]>='A')&&(Arr[End]<='Z'))
			{
				if(Arr[i]!=Arr[End])
				{
					break;
				}
				End--;
				i++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z')&&(Arr[End]>='a')&&(Arr[End]<='z'))
			{
				if(Arr[i]!=Arr[End])
				{
					break;
				}
				End--;
				i++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z')&&(Arr[End]>='A')&&(Arr[End]<='Z'))
			{
				if(Arr[i]!=(char)((int)Arr[End]+32))
				{
					break;
				}
				End--;
				i++;
			}
			else if((Arr[i]>='A')&&(Arr[i]<='Z')&&(Arr[End]>='a')&&(Arr[End]<='z'))
			{
				if(Arr[i]!=(char)((int)Arr[End]-32))
				{
					break;
				}
				End--;
				i++;
			}
			else
			{
				if(Arr[i]!=Arr[End])
				{
					break;
				}
				End--;
				i++;
			}
		}
		
		if(i<End)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class Ass60_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str1;
		boolean bRet=false;

		System.out.println("Enter String");
		str1=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		bRet=dobj.StrPallindrome(str1);
	
		if(bRet==true)
		{
		System.out.println("String is Palindrom");
		}
		else
		{
			System.out.println("String is not Palindrom");
		}
	}
}
