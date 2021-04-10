#include <iostream>
#include <sstream>
#include "DoublyLinkedList.h"

int main()
{
	int i;
	string tempBuff = "", tempStr = "";
	stringstream sstr;

	DoublyLinkedList dl;
	
	// inserting 100 strings to the doubly list front
	for(i=0; i<100; i++)
	{
		sstr << i;
		sstr >>tempBuff;
		tempStr = "String no:" + tempBuff;
		dl.insertDataFront(tempStr);
		sstr.clear();
		tempStr = "";
		tempBuff = "";
	}


	// inserting 5 strings to the doubly list back
	for(i=0; i<5; i++)
	{
		sstr << i*5+999;
		sstr >>tempBuff;
		tempStr = "String no:" + tempBuff;
		dl.insertDataBack(tempStr);
		sstr.clear();
		tempStr = "";
		tempBuff = "";
	}

	dl.displayDataReverse();
	dl.displayDataForward();
}