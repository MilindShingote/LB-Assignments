/*Write a program which display largest digits of all element from singly linear linked list.

Input linked list : |11|->|250|->|532|->|419|
Output :	1	5	5	9	*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

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

void DisplayLarge(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int No=0,Digit=0;
	BOOL Flag=TRUE;
	int Max=0;
	printf("\n");
	while(Temp!=NULL)
	{
		No=Temp->Data;
		while(No!=0)
		{
			if((Digit!=0)&&(Flag==TRUE))
			{
				Max=Digit;
				Flag=FALSE;
			}
			Digit=No%10;
			if((Digit!=0)&&(Digit>Max))
			{
				Max=Digit;
			}
			No=No/10;
		}
		printf("%d\t",Max);
		Digit=0;
		Flag=TRUE;
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

	InsertFirst(&Head,415);
	InsertFirst(&Head,532);
	InsertFirst(&Head,250);
	InsertFirst(&Head,11);

	Display(Head);
	DisplayLarge(Head);
	
	return 0;
}

