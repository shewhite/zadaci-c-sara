// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std; 


int main()
{
	char jed, dva, tri;
	int niz = 0;
	int chipovi;

	srand(time(NULL));

	cout << "Koliko chipova zelite uloziti ?" << endl;
	cin >> chipovi;

	cout << "STISNI ENTER I ZAIGRAJ JEDNORUKOG JACKA-A" << endl;

	while (cin.ignore()) {

		if (chipovi > 30) {
			jed = rand() % 3;
			dva = rand() % 3;
			tri = rand() % 3;

			if (jed == 0) {
				jed = '+';

			}
			if (jed == 1) {
				jed = 'X';

			}
			if (jed == 2) {
				jed = 'O';

			}
			if (jed == 3) {
				jed = '*';

			}

			if (dva == 0) {
				dva = '+';

			}
			if (dva == 1) {
				dva = 'X';

			}
			if (dva == 2) {
				dva = 'O';

			}
			if (dva == 3) {
				dva = '*';
			}
			if (tri == 0) {
				tri = '+';

			}
			if (tri == 1) {
				tri = 'X';

			}
			if (tri == 2) {
				tri = 'O';

			}
			if (tri == 3) {
				tri = '*';

			}

			cout << "  " << jed << "  " << dva << "  " << tri << endl;

			if (jed == dva && dva == tri && tri == jed) {
				cout << "POBJEDAAAAAAAA" << "\t" << "POGODIO SI IZ  " << niz << "  POKUSAJA" << endl;
				chipovi += 30;
				cout << "Imate " << chipovi << " chipova";

			}
			else {
				cout << "POKUSAJ PONOVO" << endl;
				niz++;
				chipovi -= 10;
				cout << "Imate " << chipovi << " chipova";
			}
			system("PAUSE");
			system("cls");
		}
		else {
			cout << "Nemate dovoljno chipova za nastavak igre, molim Vas odite natrag u izbornik." << endl;
			cin.ignore();
		
		}
	}
	
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
