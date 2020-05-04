/*Write a program which accept number from user and return multiplication of all digits.
Input :	2395
Output : 270

Input :	1018
Output : 8

Input :	9440
Output : 144

Input :	922432
Output : 864		*/

import java.io.*;
import java.util.Scanner;

class Digit
{
	public int Multiply(int iNo)
	{
		int Mult=1;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		while(iNo!=0)
		{
			if((iNo%10)!=0)
			{
				Mult=Mult*(iNo%10);
			}
			iNo=iNo=iNo/10;
		}
		return Mult;
	}
}

class Ass58_4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int No,iRet;
		System.out.println("Enter the Number");
		No=sobj.nextInt();
		
		Digit dobj=new Digit();
		iRet=dobj.Multiply(No);

		System.out.println("multiplication of all digits is "+iRet);
	}
}
