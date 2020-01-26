/*	Accept N numbers from user and display summation of digits of each number.
Input :N :	6
Elements : 8225	665 3	76	953 858
Output :	17	17	3	13	17	21	*/

#include<stdio.h>
#include<malloc.h>

void Digits(int Arr[], int iLength)
{
	int i=0,Sum=0;
	int No=0;
	for(i=0;i<iLength;i++)
	{
		No=Arr[i];
		while(No!=0)
		{
			Sum=Sum+(No%10);
			No=No/10;
		}
		printf("%d\t",Sum);
		Sum=0;
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
	
	Digits(p,Size);

	return 0;
}
