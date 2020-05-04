//Write a program which accept matrix and reverse the contents of each column.

#include<iostream>

using namespace std;

void ReverseCol(int Row,int (*Brr)[4])
{
	int i,j,Temp,End;
	End=3;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i<End)
			{
				Temp=Brr[i][j];
				Brr[i][j]=Brr[End][j];
				Brr[End][j]=Temp;
			}
		}
		End--;
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
	cout<<"Before Reverse Column\n";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cout<<Arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

	ReverseCol(iRow,Arr);
	cout<<"After Reverse Column\n";
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
