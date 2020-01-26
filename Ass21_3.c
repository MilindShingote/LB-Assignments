/*	Accept N numbers from user and display all such elements which are even and divisible by 5.
Input :N :	6
Elements : 85	66	3	80	93	88
Output :	80	*/

#include<stdio.h>
#include<malloc.h>

void Display(int Arr[], int iLength)
{
	int i=0;
	
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%5==0)&&(Arr[i]%2==0))
		{
			printf("%d\t",Arr[i]);	
		}
	}
}

int main()
{
	int Size=0;
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
	
	Display(p,Size);
	return 0;
}
