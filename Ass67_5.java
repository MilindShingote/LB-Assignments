/*	Write a java program which accept array from user and check whether that array and its elements are palindrome or not.
Input : 11	252 387783 252 11
Output : TRUE

Input : 11	252 387783 77	11
Output : FALSE	*/	

import java.io.*;
import java.util.Scanner;
class MyArray
{
	public boolean ChkPallindrome(int arr[])
	{
		int i=0,End;
		End=arr.length-1;
		while(i<End)					
		{
			if(arr[End]!=arr[i])
			{
				break;
			}
			i++;
			End--;
		}
		
		if((End<i)||(End==i))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Ass67_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		int Arr[]=new int[Size];
		System.out.println("Enter elements of array");
		
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.nextInt();
		}

		MyArray Aobj=new MyArray();
		boolean bRet=Aobj.ChkPallindrome(Arr);
	
		if(bRet==true)
		{
			System.out.println("It's Palindrom");
		}
		else
		{
			System.out.println("It's not Palindrom");
		}
	}

}	
