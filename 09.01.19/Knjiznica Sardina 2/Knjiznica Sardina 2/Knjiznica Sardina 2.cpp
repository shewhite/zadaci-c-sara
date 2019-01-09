// Knjiznica Sardina 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include<process.h>
#include<fstream>


using namespace std; 


class books {
public:
	int stock;
	char author[20]; 
	char bookname[20];

	void loadbooks();
	void display();
};

void books::loadbooks() {
	cout << "\nEnter Book Name:";
	cin >> bookname;
	cout << "\nEnter Author Name:";
	cin >> author;

	cout << "\nEnter Stock:";
	cin >> stock;
	cout << "\n-------------\n";
}

void books::display() {
	cout << "\nName of the Book:" << bookname;
	cout << "\nAuthor of the Book:" << author;

	cout << "\nStock Present:" << stock;
	cout << "\n-------------\n";
}

void main() {
	books ob[10];
	int ch, n;
	books();
	do {
		cout << "\n******\n";
		cout << "\n1.Load Books\n2.Display\n3.Search\n4.Exit\n";
		cout << "\n\nEnter your Choice:";
		cin >> ch;
		switch (ch)
		{
		case 1: cout << "Enter Number of Books:";
			cin >> n;
			for (int i = 0; i < n; i++)
				ob[i].loadbooks();
			break;
		case 2:
			/*Display List of available Books*/
			for (int i = 0; i < n; i++)
				ob[i].display();
			break;
		case 3:
			/* Searching of Book*/
			char bname[20], aname[20];
			cout << "Enter name of the Book:";
			cin >> bname;
			cout << "Enter name of the Author:";
			cin >> aname;
			for (int i = 0; i < n; i++)
			{
				if (strcmp(bname, ob[i].bookname) == 0 && strcmp(aname, ob[i].author))
				{
					cout << "\nBook Present\n\n";
					cout << "\nName of the Book:" << ob[i].bookname;
					cout << "\nAuthor of the Book:" << ob[i].author;
					
					cout << "\nStock Present:" << ob[i].stock;
					cout << "\n-------------\n";
					break;
				}
				else
				{
					cout << "Not Present!!";
					break;
				}
			}
			break;
		default: cout << "Enter a valid choice!!";
		case 4: exit(1);
		}
	} while (1);
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
