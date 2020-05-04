/*	Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
Input :	N : 6
			NO: 66
			Elements : 85	66 3 66 93 88
			Output : 3	

Input : 	N : 6
			NO: 93
			Elements : 85	11 3 15 11 111
			Output :	-1		*/

import java.io.*;
import java.util.Scanner;

class Number
{
	int LastOcc(int Brr[], int iNo)
	{
		int i,Occ=-1;
		
		for(i=0;i<Brr.length;i++)
		{
			if(Brr[i]==iNo)	
			{
				Occ=i;
			}
		}
		return Occ;
	}
}	

class Ass59_3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,No,i;
		int iRet=0;
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		int Arr[]=new int[Size];

		System.out.println("Enter the Elements");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		System.out.println("Enter Search Element");
		No=sobj.nextInt();

		Number nobj=new Number();
		iRet=nobj.LastOcc(Arr,No);
		
		System.out.println("Last Occurance is "+iRet);
	}
}
		
