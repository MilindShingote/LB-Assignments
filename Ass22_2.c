/*	Accept N numbers from user and return difference between frequency of even number and odd numbers.
Input :N :	7
Elements : 85	66	3	80	93	88	90
Output :	1	(4-3)	*/

#include<stdio.h>
#include<malloc.h>

int Frequency(int Arr[], int iLength)
{
	int i=0;
	int Even=0,Odd=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			Even=Even+1;
		}
		else
		{
			Odd=Odd+1;
		}
	}
	return Even-Odd;
}

int main()
{
	int Size=0,iRet=0;
	int *p=NULL;
	int i=0;
	printf("Enter the Size");
	scanf("%d",&Size);
	
	p=(int*)malloc(Size*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter the elements:");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&p[i]);
	}
	
	iRet=Frequency(p,Size);
	printf("frequency is %d",iRet);
	return 0;
}
