/*Write java program which accept array of characters from user and count number of small characters.
Input :	b	N	j	B	R	b	A	d	G	G
Output : 4	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	int ArraySmall(char arr[])
	{
		int i,iCnt=0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Ass68_4
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
		int iRet=Aobj.ArraySmall(Arr);
		
		System.out.println("Count of small characters is "+iRet);
	}

}	
