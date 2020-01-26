/*	Accept N numbers from user and return frequency of even numbers.
Input :N :	6
Elements : 85	66	3	80	93	88
Output :	3	*/

#include<stdio.h>
#include<malloc.h>

int CountEven(int Arr[], int iLength)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			iCnt++;
		}
	}
	return iCnt;
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
	
	iRet=CountEven(p,Size);
	printf("Even element frequency is %d",iRet);
	return 0;
}
