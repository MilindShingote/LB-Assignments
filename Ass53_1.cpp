/*	Write generic program which accept one value and one number from user. Print that value that number of times on screen.
	
	Input :	M 7
	output:	M	M	M	M	M	M	M
	
	Input : 	11 3
	Output:	11	11	11		*/

#include<iostream>

using namespace std;

template <class T>

void Display(T Value,int No)
{
	int i;
	
	for(i=1;i<=No;i++)
	{
		cout<<Value<<"\t";
	}
	cout<<"\n";
}


int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);

return 0;
}
