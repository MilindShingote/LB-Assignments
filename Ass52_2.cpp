//Write generic program to find largest number from three numbers.

#include<iostream>

using namespace std;
template<class T>

T Max(T No1,T No2,T No3)
{
	if((No1>No2)&&(No1>No3))
	{
		return No1;
	}
	else if((No2>No1)&&(No2>No3))
	{
		return No2;
	}
	else
	{
		return No3;
	}
}

int main()
{
	int iNo1=10,iNo2=30,iNo3=20;
		
	int iRet=Max(iNo1,iNo2,iNo3);
	cout<<"Largest number is "<<iRet;
	
	float No1=4.8,No2=8.2,No3=2.0;
		
	float fRet=Max(No1,No2,No3);
	cout<<"\nLargest number is "<<fRet;
	
	return 0;
}
