// Write generic program to multiply two numbers. 

#include<iostream>

template<class T>

T Multiply(T No1,T No2)
{
	T Mult=No1*No2;
	return Mult;
}

int main()
{
	int iRet = Multiply(10,20);
	printf("%d",iRet);

	float fRet = Multiply(10.0f,20.0f);
	printf("\n%f",fRet);

	return 0;
}
