// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std; 

struct Node {
	int value; 
	Node *next;
};

void insertElementFront(Node *&head, int value) {
	Node *temp = new Node; 
	temp -> value = value; 
	temp -> next = head; 
	head = temp; 

}

void insertElementEnd(Node *&head, int value) {
	Node *n = new Node; 
	n->value = value; 
	n->next = nullptr; 

	Node *temp = head; 

	if (temp == nullptr) {
		temp = n; 
		head = temp; 
	}
	else {
		temp = head; 
		while (temp->next != NULL) {
			temp = temp->next; 
		}
		temp->next = n; 
	}
}

void displayList(Node *temp) {
	if (temp == NULL) {
		cout << "Lista je prazna!" << endl; 
	}
	else {
		while (temp != nullptr) {
			cout << temp->value << "\t"; 
			temp = temp->next;
		}
		cout << endl; 
	}
}

void deleteHead(Node *&head) {
	Node *temp = head; 
	if (temp != 0) {
		head = temp->next;
		delete temp; 
	}
}

void deleteTail(Node *&head) {
	Node *temp = head; 
	if (head->next == nullptr) {
		head = nullptr,
			delete temp;
	}
	else {
		Node *prev = nullptr; 
		while (temp->next != nullptr) {
			prev = temp; 
			temp = temp->next; 
		}
		prev->next = nullptr; 
		delete temp; 
	}
}

void povrat (Node *&head) {

}

int main()
{	
	Node * head = nullptr; 
	Node *tail = nullptr; 

	insertElementEnd(head, 1); 
	insertElementEnd(head, 2);
	insertElementEnd(head, 3);
	displayList(head);

	system("PAUSE"); 
	return 0; 

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
