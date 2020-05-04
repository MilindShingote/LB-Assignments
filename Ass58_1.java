/*	Write a java program which accept number from user and return the count of even digits.
Input :	2395
Output : 1

Input :	1018
Output : 2

Input :	-1018
Output : 2

Input :	8462
Output : 4		*/

import java.io.*;
import java.util.Scanner;

class Digit
{
	public int CountEven(int iNo)
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iNo!=0)
		{
			if((iNo%10)%2==0)
			{
				iCnt++;
			}
			iNo=iNo=iNo/10;
		}
		return iCnt;
	}
}

class Ass58_1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int No,iRet;
		System.out.println("Enter the Number");
		No=sobj.nextInt();
		
		Digit dobj=new Digit();
		iRet=dobj.CountEven(No);

		System.out.println("Even digit count is "+iRet);
	}
}
