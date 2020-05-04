// Write generic program to accept N values from user and return smallest value.

#include<iostream>

using namespace std;
template<class T>
T Minimum(T *Arr, int Size)
{
	T Min;
	int i=0;
	Min=Arr[i];
	for(i=0;i<Size;i++)	
	{
		if(Arr[i]<Min)
		{
			Min=Arr[i];
		}
	}
	return Min; 
}
int main()
{
	int iSize,i;
	cout<<"Enter the Size of Array";
	cin>>iSize;
	
	int Arr[iSize];
	cout<<"Enter the Element of array";
	for(i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
	int iRet=Minimum(Arr,iSize);
	cout<<"Smallest value is "<<iRet;

	float Brr[iSize];
	cout<<"\nEnter the Element of array";
	for(i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	float fRet=Minimum(Brr,iSize);
	cout<<"Smallest value is "<<fRet;

	return 0;
}
