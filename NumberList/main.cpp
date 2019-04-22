#include <iostream>
#include <fstream>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList list;
	
	NumberList listA, listB;
	
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);
	
	cout<< " listA before assignment: "<< endl;
	listA.displayList();
	
	cout<< "listB before assignment: " << endl;
	listB.displayList();
	
	listA = listB;
	listB.appendNode(50);
	
	cout << listA after assignment: " << endl;
	listA.displayList();
	
	cout << "listB after assignment: " << endl;
	listB.displayList();
	
	//Tsk5
	
	listB.appendNode(20);
	listB.appendNode(30);
	
	
	listB.deleteNode(15);
	listB.deleteNode(30);
	
	listB.deleteNode(50);
	
	return 0;
}
