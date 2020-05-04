/*	Write generic program to accept N values from user and return addition of that values. */

#include<iostream>

using namespace std;

template<class T>

T AddN(T *Arr,int Size)
{
	T Sum;
	int i=0;
	
	for(i=0;i<Size;i++)
	{
		Sum=Sum+Arr[i];
	}
	
	return Sum;
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
	int iRet=AddN(Arr,iSize);
	cout<<"Addition is "<<iRet;

	float Brr[iSize];
	cout<<"\nEnter the Element of array";
	for(i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	float fRet=AddN(Brr,iSize);
	cout<<"Addition is "<<fRet;

	return 0;
}
