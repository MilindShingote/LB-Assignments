/*Write a program which accept number from user and return the count of digits in between 3 and 7.
Input :	2395
Output : 1

Input :	1018
Output : 0

Input :	4521
Output : 2

Input :	9922
Output : 0		*/

import java.io.*;
import java.util.Scanner;

class Digit
{
	public int CountRange(int iNo)
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iNo!=0)
		{
			if(((iNo%10)>3)&&((iNo%10)<7))
			{
				iCnt++;
			}
			iNo=iNo=iNo/10;
		}
		return iCnt;
	}
}

class Ass58_3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int No,iRet;
		System.out.println("Enter the Number");
		No=sobj.nextInt();
		
		Digit dobj=new Digit();
		iRet=dobj.CountRange(No);

		System.out.println("count of digits in between 3 and 7 is "+iRet);
	}
}
