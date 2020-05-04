/*	Write generic program to accept N values and search Last occurrence of any
specific value.
Input : 10 20	30	10	30	40	10	40	10
Value to search : 40
Output : 8	*/

#include<iostream>

using namespace std;

template <class T>

int LastOcc(T *Ptr,int Size,T Value)
{
	int i,Occ;
	
	for(i=0;i<Size;i++)
	{
		if(Ptr[i]==Value)
		{
			Occ=i;
		}
	}
	cout<<"\n";
	return Occ+1;
}


int main()
{
	int iSize;
	
	cout<<"Enter the size of array";
	cin>>iSize;
	
	int Arr[iSize];
	cout<<"Enter elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Arr[i];
	}
	int iRet=LastOcc(Arr,iSize,40);
	cout<<"Last Occurance of 40 is "<<iRet;

	float Brr[iSize];
	cout<<"Enter the Elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	
	float fRet=LastOcc(Brr,iSize,10.5f);
	cout<<"Last Occurance of 10.5 is "<<fRet;

	return 0;
}
