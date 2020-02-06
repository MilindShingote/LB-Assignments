/*	Write a program which displays all elements which are prime from singly linear linked list.

Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output :	11	17	41	89		*/

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

void DisplayPrime(PNODE First)
{
	PNODE Temp=NULL;
	Temp=First;
	int i=0;
	printf("\n");
	while(Temp!=NULL)
	{
		for(i=2;i<(Temp->Data);i++)
		{
			if((Temp->Data)%i==0)
			{
				break;
			}
		}
		if(i==Temp->Data)
		{
			printf("%d\t",Temp->Data);
		}
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
	InsertFirst(&Head,22);
	InsertFirst(&Head,41);
	InsertFirst(&Head,17);
	InsertFirst(&Head,20);
	InsertFirst(&Head,11);

	Display(Head);
	DisplayPrime(Head);
	
	return 0;
}

