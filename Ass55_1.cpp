/*	Write a program which accept matrix from user and display transpose of the
matrix.
The transpose of a given matrix is formed by interchanging the rows and
columns of a matrix.*/

#include<iostream>

using namespace std;

void Transpose(int Row,int (*Brr)[4])
{
	int i,j,Temp;
	
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j>=i)
			{
				Temp=Brr[i][j];
				Brr[i][j]=Brr[j][i];
				Brr[j][i]=Temp;
			}
		}
	}

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
	cout<<"Before Transpose\n";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cout<<Arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

	Transpose(iRow,Arr);
	cout<<"After Transpose\n";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cout<<Arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
