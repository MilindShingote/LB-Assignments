/*	Write generic program to accept N values from user and return largest values. */

#include<iostream>

using namespace std;
template<class T>
T Maximum(T *Arr, int Size)
{
	T Max;
	int i=0;
	Max=Arr[i];
	for(i=0;i<Size;i++)	
	{
		if(Arr[i]>Max)
		{
			Max=Arr[i];
		}
	}
	return Max; 
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
	int iRet=Maximum(Arr,iSize);
	cout<<"Largest value is "<<iRet;

	float Brr[iSize];
	cout<<"\nEnter the Element of array";
	for(i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	float fRet=Maximum(Brr,iSize);
	cout<<"Largest value is "<<fRet;

	return 0;
}
