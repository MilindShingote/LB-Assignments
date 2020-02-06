/*	Write a program which display product of all digits of all element from singly linear linked list.(Don’t consider 0)

Input linked list : |11|->|20|->|32|->|41|
Output :	1	2	6	4		*/

#include<stdio.h>
#include<malloc.h>
struct node
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First,int No)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));

	Newn->Next=NULL;
	Newn->Data=No;

	if(*First==NULL)
	{
		*First=Newn;
	}
	else
	{
		Newn->Next=*First;
		*First=Newn;
	}
}

void DisplayProduct(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Sum=1;
	int No=0,Digit=0;
	printf("\n");
	while(Temp!=NULL)
	{
		No=Temp->Data;
		while(No!=0)
		{
			Digit=No%10;
			if(Digit!=0)
			{
				Sum=Sum*Digit;
			}
			No=No/10;
		}
		printf("%d\t",Sum);
		Sum=1;
		Digit=0;
		Temp=Temp->Next;
	}
}
void Display(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	printf("Input Linked list is:\t");
	while(Temp!=NULL)
	{
		printf("%d\t",Temp->Data);
		Temp=Temp->Next;
	}
}

int main()
{
	PNODE Head = NULL;

	InsertFirst(&Head,41);
	InsertFirst(&Head,32);
	InsertFirst(&Head,20);
	InsertFirst(&Head,11);

	Display(Head);
	DisplayProduct(Head);
	
	return 0;
}

