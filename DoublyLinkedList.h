#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include <iostream>

using namespace std;

struct Node
{
	string data;
	struct Node* next;
	struct Node* previous;
};

class DoublyLinkedList
{
public:
	struct Node* head = NULL;
	struct Node* tail = NULL;

	DoublyLinkedList() {}
	~DoublyLinkedList() {}
	void insertDataFront(string);
	void insertDataBack(string);
	void displayDataReverse();
	void displayDataForward();
	void deleteFromFront();
	void deleteFromBack();
};

#endif