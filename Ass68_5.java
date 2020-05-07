/*Write java program which accept marks of N students from user and display class of each student.

Less than 35	-	Fail
Less than 50	-	Pass class
Less than 60	-	Second class
Less than 70	-	First class
Greater than 70-	First class with Distinction

Input :	67.3	45.8	88.9	77.5	55.2

Output:	67.3	First class
			45.8	Pass class
			88.9	First class with Distinction
			77.5	First class with Distinction
			55.2	Second class
	*/	

import java.io.*;
import java.util.Scanner;

class MyArray
{
	public void Percentage(float arr[])
	{
		int i;
		
		for(i=0;i<arr.length;i++)
		{
			if(arr[i]<35)			
			{
				System.out.println(arr[i]+"\tFail");
			}
			else if(arr[i]<50)
			{
				System.out.println(arr[i]+"\tPass Class");
			}
			else if(arr[i]<60)
			{
				System.out.println(arr[i]+"\tSecond Class");
			}
			else if(arr[i]<70)
			{
				System.out.println(arr[i]+"\tFirst Class");
			}
			else if(arr[i]<100)
			{
				System.out.println(arr[i]+"\tFirst Class with Distinction");
			}
			else
			{
				System.out.println("Enter Correct Marks");
			}
		}
	}
}
class Ass68_5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int Size,i;
		
		System.out.println("Enter the Size of Array");
		Size=sobj.nextInt();
		
		float Arr[]=new float[Size];
		System.out.println("Enter elements of array");
		
		for(i=0;i<Arr.length;i++)
		{		
			Arr[i]=sobj.nextFloat();
		}

		MyArray Aobj=new MyArray();
		Aobj.Percentage(Arr);
		
	}

}	
