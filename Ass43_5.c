/*	Write a program which display addition of digits of element from singly linear linked list.

Input linked list : |110|->|230|->|20|->|240|->|640|
Output :	2	5	2	6	10		*/

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

void SumDigit(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int i=0,Sum=0,No=0;
	printf("\n");
	while(Temp!=NULL)
	{
		No=Temp->Data;
		while(No!=0)
		{
			Sum=Sum+(No%10);
			No=No/10;
		}
		printf("%d\t",Sum);
		Sum=0;
		Temp=Temp->Next;
	}
	printf("\n");
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

	InsertFirst(&Head,240);
	InsertFirst(&Head,320);
	InsertFirst(&Head,230);
	InsertFirst(&Head,110);

	Display(Head);
	SumDigit(Head);
	return 0;
}

