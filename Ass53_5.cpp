/*	Write generic program to accept N values and reverse the contents.
Input : 	10 	20 	30 	10 	30 	40 	10 	40 	10
Output : 10 	40 	10 	40 	30 	10 	30 	20 	10		*/

#include<iostream>

using namespace std;

template <class T>

void Reverse(T *Ptr,int Size)
{
	int Start,End;
	T Temp;
	Start=0;
	End=Size-1;
	while(Start<End)
	{
		Temp=Ptr[Start];
		Ptr[Start]=Ptr[End];
		Ptr[End]=Temp;
		Start++;
		End--;
	}
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
	Reverse(Arr,iSize);
	
	cout<<"Reverse elements are\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<Arr[i]<<"\t";
	}

	float Brr[iSize];
	cout<<"\nEnter Elements of array";
	for(int i=0;i<iSize;i++)
	{
		cin>>Brr[i];
	}
	Reverse(Brr,iSize);
	cout<<"Reverse elements are\n";
	for(int i=0;i<iSize;i++)
	{
		cout<<Brr[i]<<"\t";
	}

	return 0;
}
