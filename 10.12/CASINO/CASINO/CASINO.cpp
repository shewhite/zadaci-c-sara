// CASINO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void izbornik(int &novci, int &chipovi, string &ime);
void uplata(int &novci, int &chipovi, string &ime);
void isplata(int &novci, int &chipovi, string &ime);
void odabirigre(int &chipovi, int&novci, string &ime);
//void highscore(); 
void jednorukijack(int &chipovi, int&novci, string &ime);
void bacanjekockica(int &chipovi, int&novci, string &ime);
void duploilinista(int &chipovi, int&novci, string &ime);


int main()
{
	string ime; 
	int novci = 0;
	int chipovi = 0;


	cout << "DOBRODOSLI U NAJBOLJI CASINO NA SVIJETU"<<endl;

	cout <<"**********"<< " Molimo Vas unesite Vase ime" << "**********"<< endl;

	cin >> ime; 
	
	cout << " Koliko novaca ulazete ?" << endl;

	cin >> novci; 

	cout << "Izaberite sljedeci korak...." << endl;

	izbornik(novci, chipovi, ime); 



}

void izbornik(int &novci, int &chipovi, string &ime){
	
	int izbor; 

	cin.ignore();
	cout << " 1. Preuzmite svoje chipove - 1 chip = 5 kn.\n 2. Isplata novca \n 3. Odabir igre\n 4. High score \n 5. Izlaz iz programa" << endl;
	cin >> izbor;

	switch (izbor) {
	case 1:
		system("cls");
		uplata(novci, chipovi, ime);
		break;

	case 2:
			system("cls");
			isplata (chipovi,novci, ime);
			break;

	case 3:
			system("cls");
			odabirigre(novci, chipovi, ime);
			break;
	/*case 4:
			system("cls");
			highscore();
			break;*/

	/*case 5:
			return 0; */

	default:
		system("cls");
		cout << "Niste unijeli valjani izbor. Pokušajte ponovo.\n";
	}

	
}

void uplata(int &novci, int &chipovi, string &ime) {
	
	int izlaz;
	int novcizamijenjanje;

	cout << "**********" << "Koliko novaca mijenjate za chipove ?" <<"**********" << endl;
	cin >> novcizamijenjanje;

	if (novcizamijenjanje > novci) {
		cout << " Nemate dovoljno sredstava. Molimo Vas pokusajte ponovo" << endl; 
		cin.ignore(); 
		izbornik (novci, chipovi, ime); 
	}
	else if (novcizamijenjanje <= novci) {

		chipovi = novcizamijenjanje / 5;

		novci = novci - novcizamijenjanje;
	}
	cout <<"**********"<< "Imate   " << chipovi << "   chipa"<<"**********" << endl;

	cout << "Za povratak u izbornik pritisnite 1. \n Za ponovno mijenjanje chipova pritisnite 2. " << endl;

	cin >> izlaz;

	switch (izlaz) {
	case 1:
		system("cls");
		izbornik(novci, chipovi, ime);
		break;

	case 2:
		system("cls");
		uplata(novci, chipovi, ime);
		break;

	default:
		system("cls");
		cout << "Niste unijeli valjani izbor. Pokusajte ponovo.\n";

	}
}

void isplata(int &chipovi, int&novci, string &ime) {

	int izlaz2, izlaz3; 

	cout << "Imate " << chipovi << " chipova" << endl; 
	cout << "Jeste li sigurni da zelite unovciti svoje chipove ? \n ako je vas odgovor DA pritisnite 1\n aako je vas odgovor NE pritisnite 2. " << endl; 
	cin >> izlaz2; 
	
	if (izlaz2 == 1) {

		cout << "Jeste li stvarnoooo sigurni da zelite unovciti svoje chipove? \n 1.za DA\n 2. za NE";
		cin >> izlaz3;
		if (izlaz3 == 1) {
			novci = chipovi * 5;

			if (novci >= 5) {
				cout << "Imate " << novci << " kuna na racunu." << endl;
			}
			else if (novci < 5) {
				cout << "Zao nam je nemate dovoljno chipova za isplatu, ako zelite igrati ponovo pritisnite enter za uplatu." << endl;
				cin.ignore();
				uplata(novci, chipovi, ime);
			}

		}
		else if (izlaz3 == 2) {
			cout << "Pritisnite enter za vracanje u izbornik." << endl;

			cin.ignore();

			izbornik (novci, chipovi, ime);


		}
		if (izlaz2 == 2) {
			cout << "Pritisnite enter za vracanje u izbornik." << endl;

			cin.ignore();

			izbornik (novci, chipovi, ime);
		}

	}
}

void odabirigre(int &chipovi, int&novci, string &ime) {
	 
	int izborigre; 
	cout << "Odaberite svoju igru!!!" << endl;
	cout << " 1. Jednoruki Jack \n 2. Bacanje kockice \n 3. Duplo ili nista -zvlacenje karata \n 4. Povratak u izbornik" << endl; 
	cin >> izborigre; 

	switch (izborigre) {

	case 1:
		system("cls");
		jednorukijack(novci, chipovi, ime);
		break;

	case 2:
		system("cls");
		bacanjekockica(novci, chipovi, ime);
		break;

	case 3:
		system("cls");
		duploilinista (novci, chipovi, ime);
		break;

	case 4:
		system("cls");
		izbornik(novci, chipovi, ime);
		break;

	default:
		system("cls");
		cout << "Niste unijeli valjani izbor. Pokusajte ponovo.\n";
		

	}


}

void jednorukijack(int &chipovi, int&novci, string &ime) {

	srand(time(NULL));
	char jed, dva, tri;
	int niz = 0;
	int ulog; 
			
	cout << "Koliko chipova zelite uloziti ?" << endl;
	cin >> ulog;

	cout << "STISNI ENTER I ZAIGRAJ JEDNORUKOG JACKA-A" << endl;

	while (cin.ignore()) {

		if (ulog > 30) {
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
				ulog += 30; 
				chipovi = chipovi + ulog;
				cout << "Imate " << ulog << " chipova"<<endl;
				cout << endl; 

				ofstream fw;
				fw.open("jack.txt", ios::out | ios_base::app);
				fw << ime << ": " << chipovi -ulog << " " << endl;
				fw.close();


				cout << "Stisnite enter za povratak u izbornik." << endl; 
				cin.ignore(); 
				izbornik(novci, chipovi, ime); 

			}
			else {
				cout << "POKUSAJ PONOVO" << endl;
				niz++;
				ulog -= 10;
				chipovi = chipovi + ulog; 

				fstream fw;
				fw.open("jack.txt", ios::out | ios_base::app);
				fw << ime << ": " << chipovi - ulog << " " << endl;
				fw.close();

				cout << "Imate " << ulog << " chipova"<<endl;
				
			}
			system("PAUSE");
			system("cls");
		}

		else {
			cout << "Nemate dovoljno chipova za nastavak igre, molim Vas odite natrag u izbornik." << endl;
			cin.ignore();
			izbornik(novci, chipovi, ime);
		}
	}
}

void bacanje(int &rezultat) {
	int rezultat1 = rand() % 6 + 1;
	int rezultat2 = rand() % 6 + 1;

	cout << "__________________" << endl;
	cout << "   " << rezultat1 << "   " << rezultat2 << endl;
	cout << "__________________" << endl;

	rezultat = rezultat1 + rezultat2;

}

void bacanjekockica(int &chipovi, int&novci, string &ime) {

	srand(time(NULL));

	string igrac1, Kompjutor;
	int rez1 = 0, rez2 = 0;
		 

	cout << ime << " koliko chipova zelis uloziti.";
	cin >> chipovi; 

	for (int i = 0; i < 2; i++) {

		cout << "POTRESI KOCKICE I BACI" << endl;
		cin.ignore();
		cout << "++++++++++++++++++++++++++++++++++" << endl;
		cout << ime << "  baci kockicu" << endl;
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
		cout << ime << "  je pobjednik!!!" << endl;
		chipovi += 50; 
		cout << "Ostalo Vam je " << chipovi << " chipova" << endl;

		ofstream fw;
		fw.open("rezultatibacanjekockice.txt", ios ::out | ios ::app);
		fw << ime << ": " << rez1 << " " << endl;
		fw.close();


		cin.ignore(); 
		cout << "Za povratak u izbornik stisni eneter." << endl; 
		cin.ignore(); 
		izbornik (novci, chipovi, ime);
	}
	else if (rez2 > rez1) {
		cout << "Kompjuter je pobjednik!!!" << endl;
		chipovi -= 50; 
		cout << "Ostalo Vam je " << chipovi << " chipova" << endl; 

		ofstream fw;
		fw.open("rezultatibacanjekockice.txt", ios ::out | ios::app);
		fw << ime << ": " << rez1 << " " << endl;
		fw.close();

		cin.ignore();
		cout << "Za povratak u izbornik stisni eneter." << endl;
		cin.ignore();
		izbornik(novci, chipovi, ime);
	}
	else {
		cout << "Nerijeseno" << endl;
		chipovi = chipovi; 
		cout << "Ostalo Vam je " << chipovi << " chipova" << endl;

		ofstream fw;
		fw.open("rezultatibacanjekockice.txt", ios ::out | ios_base::app);
		fw << ime << ": " << rez1 << " " << endl;
		fw.close();

		cin.ignore();
		cout << "Za povratak u izbornik stisni enter." << endl;
		cin.ignore();
		izbornik(novci, chipovi, ime);
	}
	
	


}

void duploilinista(int &chipovi, int&novci, string &ime) {

		vector<int> deck;
		int ulog, input = -1;
		int kartaigraca, computer_card;
	
		for (int i = 0; i < 4; i++) {
			for (int j = 1; j <= 13; j++) {
				deck.push_back(j);
			}
		}
		random_shuffle(deck.begin(), deck.end()); 
		while (input != 0 && deck.size() > 1)
		{
			system("cls");
			cout <<ime<<" imas "<< chipovi << " chipova"<< endl;
			cout << "Za igru odaberi 1 a za izbornik 0" << endl;
			cin >> input;
			if (input == 0) {
				izbornik(novci, chipovi, ime);
			}

			cout << "Koliko chipova ulazes?" << endl;
			cin >> ulog;
			cin.ignore();

			cout << "Izvuci kartu" << endl;
			cin.ignore();
			kartaigraca = deck.front(); 
			cout << kartaigraca << endl;
			deck.erase(deck.begin());

			cout << "Racunalo izvlaci kartu" << endl;
			cin.ignore();
			computer_card = deck.front(); 
			cout << computer_card << endl;
			deck.erase(deck.begin());

			if (kartaigraca > computer_card) {
				int don = -1;
				cout << "BRAVO POBIJEDIO SI" << endl;
				cout << " Za duplo ili nista stisni 1.\n Za uzimanje male pobjede stisni 0.";
				cin >> don;

				fstream fw;
				fw.open("karte.txt", ios::out | ios_base::app);
				fw << ime << ": " << chipovi<< " " << endl;
				fw.close();


				if (don == 1) {
					ulog *= 2;
					cout << "Izvuci kartu" << endl;
					cin.ignore();

					kartaigraca = deck.front(); 
					cout << kartaigraca << endl;
					deck.erase(deck.begin());

					cout << "Racunalo izvlaci kartu" << endl;
					cin.ignore();
					computer_card = deck.front(); 
					cout << computer_card << endl;
					deck.erase(deck.begin());

					if (kartaigraca > computer_card) {
						cout << "BRAVO POBIJEDIO SI" << endl;
						chipovi += ulog;

						ofstream fw;
						fw.open("karte.txt", ios::out | ios_base::app);
						fw << ime << ": " << chipovi << " " << endl;
						fw.close();
					}
					else if (computer_card > kartaigraca) {
						cout << "IZGUBIO SI"<<endl;
						chipovi -= ulog;
					}
					else cout << "IZVUCI KARTU";
				}
				else {
					chipovi += ulog;
				}

			}
			else if (kartaigraca < computer_card) {
				cout << "IZGUBIO SI";
				chipovi -= ulog;
			}
			else {
				cout << "IZVUCI KARTU";
			}
			system("PAUSE");
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
