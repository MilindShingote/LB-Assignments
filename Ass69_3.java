/*Write Java program which accept array of characters from user and accept one character. Return occurrence of that character without 
considering case.

Input :	b	N	e	B	R	b	A	i	G	i	B
			b
Output : 4	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	int Search(char arr[],char cValue)
	{
		int i,iCnt=0;
		char Temp;
		if((cValue>='A')&&(cValue<='Z'))
		{
			Temp=(char)((int)cValue+32);

			for(i=0;i<arr.length;i++)
			{
				if(arr[i]==cValue)
				{
					iCnt++;
				}
				else if(arr[i]==Temp)
				{
					iCnt++;
				}
			}
			
		}
		else if((cValue>='a')&&(cValue<='z'))
		{
			Temp=(char)((int)cValue-32);

			for(i=0;i<arr.length;i++)
			{
				if(arr[i]==cValue)
				{
					iCnt++;
				}
				else if(arr[i]==Temp)
				{
					iCnt++;
				}
			}
			
		}
		return iCnt;
	}
}

class Ass69_3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		char ch;
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		char Arr[]=new char[Size];
		System.out.println("Enter elements of array");
			
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.next().charAt(0);
		}
		
		System.out.println("Enter Character");
		ch=sobj.next().charAt(0);

		MyArray Aobj=new MyArray();
		int iRet=Aobj.Search(Arr,ch);
		System.out.println("Occurence of "+ch+" is "+iRet);
	}

}	
