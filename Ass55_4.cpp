/*Write a program which accept matrix and check whether the matrix is
identity matrix or not.
Identity matrix is a square matrix with 1’s along the diagonal from upper left to
lower right and 0’s in all other positions.
If it satisfies the structure as explained before then the matrix is called as
identity matrix.

Input:
		1	0	0	0	
		0	1	0	0	
		0	0	1	0
		0	0	0	1
Output:
		True
*/
#include<iostream>
#define TRUE 1
#define FALSE 0

using namespace std;
typedef int BOOL;

BOOL ChkIdentity(int Row,int (*Brr)[4])
{
	int i,j;
	BOOL Flag=FALSE;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				if(Brr[i][j]!=1)
				{	
					Flag=TRUE;
					break;
				}
			}
			else
			{
				if(Brr[i][j]!=0)
				{
					Flag=TRUE;
					break;
				}
			}
		}
		if(Flag==TRUE)
		{
			break;
		}
	}

	if((i==4)&&(j==4))
	{
		return TRUE;
	}
	else
	{
		if(i==j)
		{		
			if(Brr[i][j]==1)	
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		else
		{
			if(Brr[i][j]==0)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
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

	bRet=ChkIdentity(iRow,Arr);
	
	if(bRet==TRUE)
	{
		cout<<"This is Identity Matrix";
	}
	else
	{
		cout<<"This is not Identity Matrix";
	}
	return 0;
}
