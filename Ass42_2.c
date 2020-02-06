/*	Write a program which search last occurrence of particular element from singly linear linked list.
Function should return position at which element is found.
Function Prototype:	int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6		*/

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

int SearchLastOcc(PNODE First,int no)
{
	PNODE Temp=NULL;
	Temp=First;
	int iCnt=0,Occ=0;
	while(Temp!=NULL)
	{
		iCnt++;
		if(Temp->Data==no)
		{
			Occ=iCnt;
		}
		Temp=Temp->Next;
	}
	return Occ;
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
	int iRet=0;
	InsertFirst(&Head,70);
	InsertFirst(&Head,30);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	Display(Head);
	iRet=SearchLastOcc(Head,30);
	printf("\nThe Last Occurrence is %d\n",iRet);
	return 0;
}



