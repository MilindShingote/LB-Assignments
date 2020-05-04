/*	Write generic program to accept N values and count frequency of any specific
value.
Input : 10 20	30	10	30	40	10	40	10
Value to check frequency : 10
Output :4		*/

#include<iostream>

using namespace std;
template<class T>

T Frequency(T *Ptr,int Size,T Value)
{
	int i,Cnt=0;
	
	for(i=0;i<Size;i++)
	{
		if(Ptr[i]==Value)
		{
			Cnt++;
		}
	}
	cout<<"\n";
	return Cnt;
}

int main()
{
	int iSize;
	
	cout<<"Enter the size of array";
	cin>>iSize;
	
	int Arr[iSize];
	cout<<"\nEnter elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
	int iRet=Frequency(Arr,iSize,10);
	cout<<"Frequency of 10 is "<<iRet;

	float Brr[iSize];
	cout<<"Enter the Elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	
	float fRet=Frequency(Brr,iSize,10.5f);
	cout<<"Frequency of 10.5 is "<<fRet;

	return 0;
}
