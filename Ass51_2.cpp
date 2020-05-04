/*	Complete below code snippet by writing definitions of below function

1. EvenCount() - Count even elements
2. OddCount(). - Count odd elements
3. SumAll(). - sum of all elements	*/

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
		int EvenCount();
		int OddCount();
		int SumAll();
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

int Array::EvenCount()
{
	int i,Cnt=0;	
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]%2==0)
		{
			Cnt++;
		}
	}
	return Cnt;
}

int Array::OddCount()
{
	int i,Cnt=0;	
	
	for(i=0;i<Size;i++)
	{
		if(Arr[i]%2!=0)
		{
			Cnt++;
		}
	}
	return Cnt;
}

int Array::SumAll()
{
	int i,iSum=0;	
	
	for(i=0;i<Size;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;
}
int main()
{
	int iSize=0,iRet=0;
	
	cout<<"Enter the Size of Array";
	cin>>iSize;
	
	Array Obj(iSize);
	Obj.Accept();
	//Obj.Display();
	iRet=Obj.EvenCount();
	cout<<"Even Count is "<<iRet;
		
	iRet=Obj.OddCount();
	cout<<"\nOdd Count is "<<iRet;

	iRet=Obj.SumAll();
	cout<<"\nSum of all elements "<<iRet;
	return 0;
}
