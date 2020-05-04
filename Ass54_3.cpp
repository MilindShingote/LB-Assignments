/*	Write a program which accept matrix and return largest number from both the diagonals
Input :

Input:
	3	2	5	9
	4	3	2	2	
	8	4	1	9
	3	9	7	5
Output : 9	*/

#include<iostream>

using namespace std;

int MaxDiagonal(int Row,int (*Brr)[4])
{
	int i=0,j=0,Max1,Max2,Temp;
	Temp=3;
	Max1=Brr[i][j];
	Max2=Brr[i][Temp];
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				if(Brr[i][j]>Max1)
				{
					Max1=Brr[i][j];
				}
			}
			else if(j==Temp)
			{
				if(Brr[i][j]>Max2)
				{
					Max2=Brr[i][j];
				}
			}
		}
		Temp--;
	}
	
	if(Max1>Max2)
	{
		return Max1;
	}
	else
	{
		return Max2;
	}
}

int main()
{
	int i,j,iRow,iCol,iRet;
	
	cout<<"Enter Row";
	cin>>iRow;
	int Arr[iRow][4];
	
	cout<<"Enter the element of Array";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cin>>Arr[i][j];
		}
	}
	

	iRet=MaxDiagonal(iRow,Arr);
	cout<<"Largest number is "<<iRet;
	return 0;
}
