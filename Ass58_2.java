/*	Write a java program which accept number from user and return the count of odd digits.
Input :	2395
Output : 3

Input :	1018
Output : 2

Input :	-1018
Output : 2

Input :	8462
Output : 0		*/

import java.io.*;
import java.util.Scanner;

class Digit
{
	public int CountOdd(int iNo)
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iNo!=0)
		{
			if((iNo%10)%2!=0)
			{
				iCnt++;
			}
			iNo=iNo=iNo/10;
		}
		return iCnt;
	}
}

class Ass58_2
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int No,iRet;
		System.out.println("Enter the Number");
		No=sobj.nextInt();
		
		Digit dobj=new Digit();
		iRet=dobj.CountOdd(No);

		System.out.println("Odd digit count is "+iRet);
	}
}
