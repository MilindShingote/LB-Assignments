/*Write Java program which accept array of characters from user and Count Vowels.

Input :	b	N	e	B	R	b	A	i	G	i

Output : 4	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	int ArrayCountVowels(char arr[])
	{
		int i,iCnt=0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
			{
				iCnt++;
			}
			else if((arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
			{
				iCnt++;
			}
		}
	
		return iCnt;
	}
}

class Ass69_2
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
		int iRet=Aobj.ArrayCountVowels(Arr);
		System.out.println("Vowel count is "+iRet);
	}

}	
