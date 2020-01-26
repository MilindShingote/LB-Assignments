/*	Accept N numbers from user and return the smallest number.
Input :N :	6
Elements : 85	66	3	66	93	88
Output :	3	*/

#include<stdio.h>
#include<malloc.h>

int Minimum(int Arr[], int iLength)
{
	int i=0,Min=Arr[i];

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<Min)
		{
			Min=Arr[i];
		}
	}
	return Min;
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
	
	iRet=Minimum(p,Size);
	printf("The Smallest number is %d",iRet);
	return 0;
}
