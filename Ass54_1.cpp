/*	Write a program which accept matrix from user and return addition of diagonal elements.

Input:
	3	2	5	9
	4	3	2	2	
	8	4	1	5	
	3	9	7	5
Output : 12	*/

#include<iostream>

using namespace std;

int AddDiagonal(int Row,int (*Brr)[4])
{
	int i,j,Sum=0;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				Sum=Sum+Brr[i][j];
			}
		}
	}
	return Sum;
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
	iRet=AddDiagonal(iRow,Arr);
	cout<<"Addition is "<<iRet;
	return 0;
}
