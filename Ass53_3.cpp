/*	Write generic program to accept N values and search first occurrence of any
specific value.
Input : 10 20	30	10	30	40	10	40	10
Value to search : 40
Output : 6	*/

#include<iostream>

using namespace std;

template <class T>

int FirstOcc(T *Ptr,int Size,T Value)
{
	int i;
	
	for(i=0;i<Size;i++)
	{
		if(Ptr[i]==Value)
		{
			break;
		}
	}
	cout<<"\n";
	return i+1;
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
	int iRet=FirstOcc(Arr,iSize,40);
	cout<<"First Occurance of 40 is "<<iRet;

	float Brr[iSize];
	cout<<"Enter the Elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	
	float fRet=FirstOcc(Brr,iSize,10.5f);
	cout<<"First Occurance of 10.5 is "<<fRet;

	return 0;
}
