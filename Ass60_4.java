/*	Accept string from user and reverse the contents of that string by toggling the case.
Input : “aCBdef”
Output : “FEDbcA”		*/

import java.io.*;
import java.util.Scanner;

class StringDemo
{
	public String StrRevTogX(String str)
	{
		int i=0,End;
		char Arr[]=str.toCharArray();
		End=Arr.length-1;
		char Temp;
		while(i<End)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z')&&(Arr[End]>='A')&&(Arr[End]<='Z'))
			{
				Temp=Arr[i];
				Arr[i]=(char)((int)Arr[End]+32);
				Arr[End]=(char)((int)Temp+32);
				End--;
				i++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z')&&(Arr[End]>='a')&&(Arr[End]<='z'))
			{
				Temp=Arr[i];
				Arr[i]=(char)((int)Arr[End]-32);
				Arr[End]=(char)((int)Temp-32);
				End--;
				i++;
			}
			else if((Arr[i]>='a')&&(Arr[i]<='z')&&(Arr[End]>='A')&&(Arr[End]<='Z'))
			{
				Temp=Arr[i];
				Arr[i]=(char)((int)Arr[End]+32);
				Arr[End]=(char)((int)Temp-32);
				End--;
				i++;
			}
			else if((Arr[i]>='A')&&(Arr[i]<='Z')&&(Arr[End]>='a')&&(Arr[End]<='z'))
			{
				Temp=Arr[i];
				Arr[i]=(char)((int)Arr[End]-32);
				Arr[End]=(char)((int)Temp+32);
				End--;
				i++;
			}
		}
		String Rev=new String(Arr);
		return Rev;
	}
}

class Ass60_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str1,str2;

		System.out.println("Enter String");
		str1=sobj.nextLine();
		
		StringDemo dobj=new StringDemo();
		str2=dobj.StrRevTogX(str1);
	
		System.out.println("Reverse String is "+str2);
		
	}
}
