/*	Complete below code snippet by writing definitions of below function
1.	Frequency()-	Count frequency of given number
2.	SearchFirst() - Search First occurrence of number		
3.	SearchLast() - Search last occurrence of number*/

#include<iostream>
#include<malloc.h>
using namespace std;

class Array
{
	private:
		int *Arr;
		int Size;
	public:
	Array(int No)
	{
		Size=No;
		Arr=new int[No];
	}
	void Accept();
	void Display();
	int Frequency(int);
	int SearchFirst(int);
	int SearchLast(int);
	~Array()
	{
		delete []Arr;
		cout<<"\n";
	}

};

void Array::Accept()
{
	int i;
	cout<<"Enter the Element of Array";
	for(i=0;i<Size;i++)
	{
		cin>>Arr[i];
	}
}

void Array::Display()
{
	int i;
	
	cout<<"Array Element:\n";
	for(i=0;i<Size;i++)
	{
		cout<<Arr[i]<<"\t";
	}
}

int Array::Frequency(int Value)
{
	int Freq=0,i;
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==Value)
		{
			Freq++;
		}
	}
	return Freq;
}

int Array::SearchFirst(int Value)
{
	int i;
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==Value)
		{
			break;
		}
	}
	return i+1;
}

int Array::SearchLast(int Value)
{
	int i,Occ=0;
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]==Value)
		{
			Occ=i;
		}
	}
	return Occ+1;
}
int main()
{
	int No,iRet;
	
	cout<<"Enter the size of array";
	cin>>No;
	
	Array Obj(No);
	Obj.Accept();
	Obj.Display();
	
	iRet=Obj.Frequency(10);
	cout<<"The frequency of "<<10<<" is "<<iRet;

	iRet=Obj.SearchFirst(10);	
	cout<<"\nThe First Occurance of "<<10<<" is "<<iRet;

	iRet=Obj.SearchLast(20);	
	cout<<"\nThe Last Occurance of "<<20<<" is "<<iRet;
	return 0;
}
