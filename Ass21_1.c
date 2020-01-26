/*	Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input :N :	6
Elements : 85	66	3	80	93	88
Output :	53	(234 - 181)	*/

#include<stdio.h>
#include<malloc.h>

int Difference(int Arr[], int iLength)
{
	int i=0,Even=0,Odd=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			Even=Even+Arr[i];
		}
		else
		{
			Odd=Odd+Arr[i];
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
	
	iRet=Difference(p,Size);
	printf("%d",iRet);
	return 0;
}
