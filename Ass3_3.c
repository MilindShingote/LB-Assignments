//accept one number from user and display it's factors in reverse order.
//	Input	:	12
//	Output:	6	4	3	2	1	

#include<stdio.h>

void DisplayEven(int No)
{
	int iCnt=0,i=0;
	if(No<0)
	{
		No=-No;
	}
	for(i=No/2;i>0;i--)
	{
		if(No%i==0)
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int Value=0;
	printf("Enter the Value");
	scanf("%d",&Value);
	
	DisplayEven(Value);
	return 0;
}
