/*	Write a program which accept matrix and one number from user and return
frequency of that number.
Input :
Number : 9

Input:
	3	2	5	9
	4	3	2	2	
	8	4	1	9
	3	9	7	5
Output : 3	*/

#include<iostream>

using namespace std;

int AddDiagonal(int Row,int (*Brr)[4],int No)
{
	int i,j,Cnt=0;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(Brr[i][j]==No)
			{
				Cnt++;
			}
		}
	}
	return Cnt;
}

int main()
{
	int i,j,iRow,iCol,iRet,Value;
	
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
	
	cout<<"Enter the Number";
	cin>>Value;

	iRet=AddDiagonal(iRow,Arr,Value);
	cout<<"Frequency of "<<Value<<" is "<<iRet;
	return 0;
}
