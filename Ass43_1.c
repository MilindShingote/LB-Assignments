/*	Write a program which displays all elements which are perfect from singly linear linked list.

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output :	28		6		*/

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

void DisplayPerfect(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int Sum=0,i=0;
	printf("\n");
	while(Temp!=NULL)
	{
		for(i=1;i<=(Temp->Data)/2;i++)
		{
			if((Temp->Data)%i==0)
			{
				Sum=Sum+i;
			}
		}
		if(Sum==(Temp->Data))
		{
			printf("%d\t",Temp->Data);
		}
		Sum=0;
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
	
	InsertFirst(&Head,89);
	InsertFirst(&Head,6);
	InsertFirst(&Head,41);
	InsertFirst(&Head,17);
	InsertFirst(&Head,28);
	InsertFirst(&Head,11);

	Display(Head);
	DisplayPerfect(Head);
	
	return 0;
}

