/*	Write a program which accept matrix and display addition of elements From each column.
Input :

Input:
	3	2	5	9
	4	3	2	2	
	8	4	1	9
	3	9	7	5
Output : 19	11	22	24	*/

#include<iostream>

using namespace std;

void MaxDiagonal(int Row,int (*Brr)[4])
{
	int i=0,j=0,Sum=0;
	
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			Sum=Sum+Brr[i][j];
		}
		cout<<Sum<<"\t";
		Sum=0;
	}
	cout<<"\n";
}

int main()
{
	int i,j,iRow,iCol;
	
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
	

	MaxDiagonal(iRow,Arr);

	return 0;
}
