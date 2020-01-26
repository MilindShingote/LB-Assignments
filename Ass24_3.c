/*	Accept N numbers from user and return the difference between largest and smallest number.
Input :N :	6
Elements : 85	66	3	66	93	88
Output :	90	*/

#include<stdio.h>
#include<malloc.h>

int Minimum(int Arr[], int iLength)
{
	int i=0,Min=Arr[i],Max=Arr[i];
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<Min)
		{
			Min=Arr[i];
		}
		else if(Arr[i]>Max)
		{
			Max=Arr[i];
		}
	}
	return Max-Min;
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
	printf("The Difference is %d",iRet);
	return 0;
}
