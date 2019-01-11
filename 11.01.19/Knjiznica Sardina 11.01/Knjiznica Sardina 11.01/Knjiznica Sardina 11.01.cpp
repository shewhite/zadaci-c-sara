// Knjiznica Sardina 11.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <time.h>
#include <datetimeapi.h>

using namespace std;

class Knjiga {

	string naslov;
	string autor;
	int id_knjiga;

	string get_naslov() { return naslov; }
	string get_autor() { return autor; }
	int get_id_knjiga() { return id_knjiga; }

	void set_naslov(string new_naslov) { naslov = new_naslov; }
	void set_autor(string new_autor) { autor = new_autor; }
	void set_id_knjiga(int new_id_knjiga) { id_knjiga = new_id_knjiga; }

	void popis_knjiga();
	void nova_knjiga();


};

void Knjiga::nova_knjiga() {
	system("cls");
	Knjiga NovaKnjiga;
	string naslov, autor;
	int id_knjiga;

	cout << "Unesite ID knjige: " << endl;
	cin >> id_knjiga;
	cout << "Unesite naslov knjige" << endl;
	cin >> naslov;
	cout << "Unesite autoa knjige" << endl;
	cin >> autor;

	NovaKnjiga.Setnaslov(naslov);  //// kako namjestiti knjigu 
	newbook.SetName(name);



	lib.BookArray.push_back(newbook);
	cout << "Add book succsessfully!~ " << endl;


}
void Knjiga::popis_knjiga() {

}

class Clan {

	string ime;
	string prezime;
	int id_clan;

	string get_ime() { return ime; }
	string get_prezime() { return prezime; }
	int get_id_clan() { return id_clan; }

	void set_ime(string new_ime) { ime = new_ime; }
	void set_prezime(string new_prezime) { prezime = new_prezime; }
	void set_id_clan(int new_id_clan) { id_clan = new_id_clan; }

	void novi_clan();
	void popis_clanova();

};
void Clan::novi_clan() {

}
void Clan::popis_clanova() {
}

class Posudba {

private:

	static std::vector <Posudba*> izdane_knjige;
	std::time_t datum_posudbe;
	Knjiga*knjiga;
	Clan * clan;

	Posudba();
	~Posudba();

	static void popis_izdanih_knjiga();
	static void posudi_knjigu();
	static void vrati_knjigu(int index);
	static int pretraga();




}; // dovršiti posudbu 



int main() {

	int izbor;

	cout << "DOBRODOŠLI U KNJIŽNICU SARDINA\n" << endl;

	cout << "1 ----- Dodaj novog clana" << endl;
	cout << "2 ----- Dodaj novu knjigu" << endl;

	cout << "3 ----- Posudba knjige" << endl;
	cout << "4 ----- Vracanje knjige" << endl;

	cout << "5 ----- Popis knjiga" << endl;

	cout << "6 ----- Popis clanova" << endl;
	cout << "7 ----- Detalji knjige po ID-u" << endl;
	cout << "8 ----- Izlistaj sve clanove" << endl;

	cout << "0 ----- Exit;" << endl;
	cin >> izbor;

	if (izbor != 1, 2, 3, 4, 5, 6, 7, 8, 9, 0) {
		cout << endl << "Krivi odabir, pokušajte ponovo !" << endl;

	}
	else {
		switch (izbor) {
			/*case '1':
				novi_clan();
				break;

			/*case '2':
			nova_knjiga();
				break;
			case '3':

				break;
			case '4':
				();
				break;
			case '5':
			  popis_knjiga();
				break;

			case '6':
				();
				break;
			case '7':
				();

			case '8':
				();

			case '0':

				break;*/
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
