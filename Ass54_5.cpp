/*	Write a program which accept matrix and swap the contents of consecutive rows.
Input :

Input:
	3	2	5	9
	4	3	2	2	
	8	4	1	9
	3	9	7	5

Output : 
	4	3	2	2	
	3	2	5	9
	3	9	7	5
	8	4	1	9
	*/

#include<iostream>

using namespace std;

void SwapRows(int Row,int (*Brr)[4])
{
	int i,j,Temp;
	
	for(i=0;i<Row;i=i+2)
	{
		for(j=0;j<4;j++)
		{
			Temp=Brr[i][j];
			Brr[i][j]=Brr[i+1][j];
			Brr[i+1][j]=Temp;
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
	cout<<"Before Swap Row\n";
	for(i=0;i<iRow;i++)
	{	
		for(j=0;j<4;j++)
		{
			cout<<Arr[i][j]<<"\t";
		}
		cout<<"\n";
	}

	SwapRows(iRow,Arr);
	cout<<"After Swap Row\n";
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
