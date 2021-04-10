#include "DoublyLinkedList.h"

void DoublyLinkedList :: insertDataFront(string buffer)
{
	cout<<"DoublyLinkedList :: insertDataFront(string buffer)"<<endl;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = buffer;
	newNode->next = head;
	newNode->previous = NULL;

	if(head != NULL)
	{
		head->previous = newNode;
	}
	else
	{
		tail = newNode;
	}

	head = newNode;
}

void DoublyLinkedList :: insertDataBack(string buffer)
{
	cout<<"DoublyLinkedList :: insertDataBack(string buffer)"<<endl;
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = buffer;
	newNode->next = NULL;
	newNode->previous = tail;

	if(tail != NULL)
	{
		tail->next = newNode;
	}

	tail = newNode;
}


void DoublyLinkedList :: displayDataReverse()
{
	cout<<"DoublyLinkedList :: displayDataReverse()"<<endl;
	struct Node* dReverseNode;
	dReverseNode = head;

	while(dReverseNode != NULL)
	{
		cout<<dReverseNode->data<<endl;
		dReverseNode = dReverseNode->next;
	}
}

void DoublyLinkedList :: displayDataForward()
{
	cout<<"DoublyLinkedList :: displayDataForward()"<<endl;
	struct Node* dForwardNode;
	dForwardNode = tail;

	while(dForwardNode != NULL)
	{
		cout<<dForwardNode->data<<endl;
		dForwardNode = dForwardNode->previous;
	}
}

void DoublyLinkedList :: deleteFromFront()
{
	cout<<"DoublyLinkedList :: deleteFromFront()"<<endl;
	cout<<"previous head node:"<<head->data<<endl;
	head = head->next;
	head->previous = NULL;
	cout<<"new head node:"<<head->data<<endl;
}

void DoublyLinkedList :: deleteFromBack()
{
	cout<<"DoublyLinkedList :: deleteFromBack()"<<endl;
	cout<<"previous tail node:"<<tail->data<<endl;
	tail = tail->previous;
	tail->next = NULL;
	cout<<"new tail node:"<<tail->data<<endl;
}