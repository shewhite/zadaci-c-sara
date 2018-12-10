// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

	void bacanje(int &rezultat) {
		int rezultat1 = rand() % 6 + 1;
		int rezultat2 = rand() % 6 + 1; 
		
		cout << "__________________" << endl;
		cout <<"   "<< rezultat1 << "   " <<rezultat2<< endl;
		cout << "__________________" << endl;

		rezultat = rezultat1 + rezultat2;

	}

	void spremanje();

	int main()
	{
		srand(time(NULL));

		string igrac1, Kompjutor;
		int rez1 = 0, rez2 = 0;

		cout << "Ime igraca: " << endl;
		cin >> igrac1;
			
		for (int i = 0; i < 2; i++) {

			cout << "POTRESI KOCKICE I BACI" << endl;
			cin.ignore();
			cout << "++++++++++++++++++++++++++++++++++" << endl;
			cout << igrac1 << "  baci kockicu" << endl;
			cout << "++++++++++++++++++++++++++++++++++" << endl;
			cin.ignore();
			bacanje(rez1);
			rez1 += rez1;
			cin.ignore();

			cout << "++++++++++++++++++++++++++++++++++" << endl;
			cout << "Rezultat kompjutera je: " << endl;
			cout << "++++++++++++++++++++++++++++++++++" << endl;
			bacanje(rez2);
			rez2 += rez2; 

		}

		if (rez1 > rez2) {
			cout << igrac1 << "  je pobjednik!!!" << endl;
		}
		else if (rez2 > rez1) {
			cout <<"Kompjuter je pobjednik!!!" << endl;
		}
		else {
			cout << "Nerijeseno" << endl;
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
