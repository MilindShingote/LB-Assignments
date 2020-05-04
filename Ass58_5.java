/*Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input :	2395
Output : -15 (2 - 17)

Input :	1018
Output : 6	(8 - 2)

Input :	8440
Output : 16 (16 - 0)	*/

import java.io.*;
import java.util.Scanner;

class Digit
{
	public int CountDiff(int iNo)
	{
		int Even=0,Odd=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iNo!=0)
		{
			if((iNo%10)%2==0)
			{
				Even=Even+(iNo%10);
			}
			else
			{
				Odd=Odd+(iNo%10);
			}
			iNo=iNo=iNo/10;
		}
		return Even-Odd;
	}
}

class Ass58_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int No,iRet;
		System.out.println("Enter the Number");
		No=sobj.nextInt();
		
		Digit dobj=new Digit();
		iRet=dobj.CountDiff(No);

		System.out.println("Diff is "+iRet);
	}
}
