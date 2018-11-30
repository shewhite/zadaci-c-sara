// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{	
	char polje[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	for (int i = 1; i <= 9; i++) {
			if (i % 3 != 0) {¸1
				cout << polje[i - 1] << "\t";
			}
			else {
				cout << polje[i - 1] << endl;
			}
		}

	for (int i = 0; i <= 9; i++) {
			int x = 0;
			cout << "Umetnite poziciju: ";
			cin >> x;
			if (i % 2 == 0) {
				polje[x-1] = 'x';
			}
			else {
				polje[x-1] ='0';
			}
			system("cls");
			for (int i = 1; i <= 9; i++) {
				if (i % 3 != 0) {
					cout << polje[i - 1] << "\t";
				}
				else {
					cout << polje[i - 1] << endl;
				}
			}
			
			if (i > 3) {

				if (polje[0] == polje[1] && polje[1] == polje[2]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0" << endl;;
					}
				}

				if (polje[3] == polje[4] && polje[4] == polje[5]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[6] == polje[7] && polje[7] == polje[8]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[0] == polje[3] && polje[3] == polje[6]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[1] == polje[4] && polje[4] == polje[7]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[2] == polje[5] && polje[5] == polje[8]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[0] == polje[4] && polje[4] == polje[8]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				if (polje[2] == polje[4] && polje[4] == polje[6]) {
					if (polje[0] == 'x') {
						cout << " pobjednik je x"<<endl;
						i = 9;
					}
					else {
						cout << "pobjednik je 0"<<endl;
					}
				}

				

			}
     

		}

	


		system ("PAUSE");
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
