// nastavak zadataka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

int main()
{
	
	int unos = 0;
	float zbroj = 0;
	int brojac = 0; 

	do {
		cin >> unos;
		zbroj = zbroj + unos;
		brojac = brojac + 1;
		
	} while (unos != 0);

	switch ();
		case 1: ((zbroj / (brojac - 1)) > 1) {
		cout << setprecision(2) << fixed << zbroj / (brojac - 1) << endl;

		case 2:((zbroj / (brojac - 1)) == 1) {
			cout << 1 << endl;

		}
	}

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
