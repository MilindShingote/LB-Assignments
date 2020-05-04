/*	Write a program which accept matrix and check whether the matrix is
Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero.	

Input:
	1	0	3	0	
	0	6	0	0
	0	0	1	0
	9	0	0	9

Output: TRUE		*/

#include<iostream>
#define TRUE 1
#define FALSE 0

using namespace std;
typedef int BOOL;

BOOL ChkSparse(int Row,int (*Brr)[4])
{
	int i,j,Num=0,Zero=0;
	
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(Brr[i][j]==0)
			{	
				Zero++;
			}
			else
			{
				Num++;
			}
		}
	}

	if(Zero>Num)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int i,j,iRow,iCol,bRet=FALSE;
	
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

	bRet=ChkSparse(iRow,Arr);
	
	if(bRet==TRUE)
	{
		cout<<"This is Sparse Matrix";
	}
	else
	{
		cout<<"This is not Sparse Matrix";
	}
	return 0;
}
