/*	Accept N numbers from user and return product of all odd elements.
Input :N :	6
Elements : 	15	66	3	70	10	88
Output :		45	*/

#include<stdio.h>
#include<malloc.h>

int Product(int Arr[], int iLength)
{
	int i=0,iMult=1;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2!=0)
		{
			iMult=iMult*Arr[i];
		}
	}
	return iMult;
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
	
	iRet=Product(p,Size);
	printf("%d",iRet);
	return 0;
}
