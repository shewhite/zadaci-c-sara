// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bottles() {
	for (int i = 1; i <= 99; i++) {
		cout << i << "  bottles of beer on the wall" << endl;
	 }

}
void zbroj()  {
	int suma = 0;
	int broj;

	while (cin >> broj && broj != 0) {
		suma += broj;
		cout << suma<<endl;
	}
}
void lozinka() {
	int lozinka;
	int tocnalozinka = 1234;

	cout << "unesite lozinku"<<endl;
	cin >> lozinka;

	for (int i = 0; i < 3; i++) {
		cout << "ovo je vas " << i + 1 << "pokusaj" << endl;
		cout << "unesite lozinku"<<endl;
		cin >> lozinka;
		if (lozinka == tocnalozinka) {
			cout << "lozinka je tocna"<<endl;
			break;
		}
		else {
			cout << "lozinka je netocna "<<endl;
		}
	}
}
void tablica() {
	int tab[10][10];

	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			tab[i][j] = (i + 1)  * (j + 1);
			cout << tab[i][j] << " \t ";

		}
		cout << endl;
	}

}
void izbornik() {

	int n; 

	cout << "upisi 1 za ispis pjesme 99 bottles"<<endl;
	cout << "upisi 2 za zbroj brojeva" << endl;
	cout << "upisi 3 za unos lozinke" << endl;
	cout << "upisi 4 za ispis tablice množenja" << endl;
	
	cin >> n;

	if (n == 1) {
		bottles();
	}
	if (n == 2) {
		zbroj();
	}
	if (n == 3) {
		lozinka();
	}
	if (n == 4) {
		tablica();
	}

}
void zbrajanje() {
	int
}
using namespace std;

int main()
{
	

	
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
