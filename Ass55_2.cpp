//Write a program which accept matrix and reverse the contents of each row.

#include<iostream>

using namespace std;

void ReverseRow(int Row,int (*Brr)[4])
{
	int i,j,Temp,End;
	End=3;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j<End)
			{
				Temp=Brr[i][j];
				Brr[i][j]=Brr[i][End];
				Brr[i][End]=Temp;
			}
			End--;
		}
		End=3;
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
	cout<<"Before Reverse Row\n";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cout<<Arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

	ReverseRow(iRow,Arr);
	cout<<"After Reverse Row\n";
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
