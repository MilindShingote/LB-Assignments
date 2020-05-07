/*Write Java program which accept array of characters from user and replace each capital character with its corresponding small character.

Input :	b N j B R b A d G G

Output : b n j b r b a d g g	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	public void ArrayReplace(char arr[])
	{
		int i;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
				arr[i]=(char)((int)arr[i]+32);
			}
		}
	
		for(i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+"\t");	
		}
	}
}

class Ass69_1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		char Arr[]=new char[Size];
		System.out.println("Enter elements of array");
		
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.next().charAt(0);
		}

		MyArray Aobj=new MyArray();
		Aobj.ArrayReplace(Arr);
		
	}

}	
