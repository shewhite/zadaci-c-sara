// Knjiznica Sardina 11.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <time.h>

using namespace std;

class Knjiga {
	static vector <Knjiga> Knjige;
	string naslov;
	string autor;
	int id_knjiga;

public:

	string get_naslov() { return naslov; }
	string get_autor() { return autor; }
	int get_id_knjiga() { return id_knjiga; }

	void set_naslov(string new_naslov) { naslov = new_naslov; }
	void set_autor(string new_autor) { autor = new_autor; }
	void set_id_knjiga(int new_id_knjiga) { id_knjiga = new_id_knjiga; }


	static void popis_knjiga();
	static void nova_knjiga();
	static Knjiga pretraga_knjiga(); 

};

vector <Knjiga> Knjiga::Knjige;

void Knjiga::nova_knjiga() {
	system("cls");
	Knjiga NovaKnjiga;
	string naslov, autor;
	int id_knjiga;

	cout << "Unesite ID knjige: " << endl;
	cin >> id_knjiga;
	cout << "Unesite naslov knjige" << endl;
	cin >> naslov;
	cout << "Unesite autora knjige" << endl;
	cin >> autor;


	NovaKnjiga.set_id_knjiga(id_knjiga); 
	NovaKnjiga.set_naslov(naslov);  
	NovaKnjiga.set_autor(autor); 
	
	Knjige.push_back(NovaKnjiga);

	system("pause"); 

}
void Knjiga::popis_knjiga() {

	for (int i = 0; i < Knjige.size(); i++) {
		cout << Knjige[i].get_naslov() << endl;
	}
}
Knjiga Knjiga::pretraga_knjiga() {

	string naslov; 
	int brojac = 0; 

	cout << "Unesite naslov knjige: "; 
	cin >> naslov; 

	for (int i = 0; i < Knjige.size(); i++) {
		if (Knjige[i].get_naslov() == naslov) {
			return Knjige[i];
		}
	}
}

class Clan {

	static vector <Clan> Clanovi;
	string ime;
	string prezime;
	int id_clan;

public:
	string get_ime() { return ime; }
	string get_prezime() { return prezime; }
	int get_id_clan() { return id_clan; }

	void set_ime(string new_ime) { ime = new_ime; }
	void set_prezime(string new_prezime) { prezime = new_prezime; }
	void set_id_clan(int new_id_clan) { id_clan = new_id_clan; }


	static void novi_clan();
	static void popis_clanova();
	static Clan pretraga_clan();
	
};

vector <Clan> Clan::Clanovi;

void Clan::novi_clan() {
	
	Clan NoviClan;
	string ime;
	string prezime;
	int id_clan;;

	cout << "Unesite ID clana: " << endl;
	cin >> id_clan;
	cout << "Unesite ime clana" << endl;
	cin >> ime;
	cout << "Unesite prezime clana" << endl;
	cin >> prezime;

	NoviClan.set_id_clan(id_clan);
	NoviClan.set_ime(ime);
	NoviClan.set_prezime(prezime);


	Clanovi.push_back(NoviClan);
}
void Clan::popis_clanova() {

	for (int i = 0; i < Clanovi.size(); i++) {
		cout << Clanovi[i].get_ime() << endl;
	}
	system ("pause"); 
}
Clan Clan::pretraga_clan() {

	string ime;
	int brojac = 0;

	cout << "Unesite ime clana: ";
	cin >> ime;

	for (int i = 0; i < Clanovi.size(); i++) {
		if (Clanovi[i].get_ime() == ime) {
			return Clanovi[i];
		}
	}
}

class Posudba {

private:
	static vector <Posudba> izdane_knjige;
	
	Knjiga* knjiga;
	Clan* clan;

	Posudba();
	~Posudba();

public:

	static vector <Posudba> izdane_knjige;
	static void popis_izdanih_knjiga();
	static void posudba_knjige();
	static void vracanje_knjige();	

};

vector <Posudba> Posudba::izdane_knjige;

void Posudba::popis_izdanih_knjiga() {

	for (int i = 0; i < izdane_knjige.size(); i ++) {
		cout << izdane_knjige.size(); 
		cout << "Knjiga\n"; 
		cout << izdane_knjige[i].knjiga->get_naslov() << endl; 
		cout << "je posudena: \n";
		cout << izdane_knjige[i].clan->get_ime() << endl; 
	}

	system("pause");
}
void Posudba::posudba_knjige(){
	Posudba p;
	p.knjiga = &Knjiga::pretraga_knjiga();
	p.clan = &Clan::pretraga_clan();
	izdane_knjige.push_back(p);
}
void Posudba::vracanje_knjige() {
	string naslov;
	cout << "Koju knjigu zelite vratiti: ";
	cin >> naslov;
	for (int i = 0; i < izdane_knjige.size(); i++) {
		if (naslov == izdane_knjige[i].knjiga->get_naslov()) {
			izdane_knjige.erase(izdane_knjige.begin() + i);
		}
	}
}

int main() {


	int izbor;
	do {
		cout << "DOBRODOSLI U KNJIZNICU SARDINA\n" << endl;

		cout << "1 ----- Dodaj novog clana" << endl;
		cout << "2 ----- Dodaj novu knjigu" << endl;

		cout << "3 ----- Posudba knjige" << endl;
		cout << "4 ----- Vracanje knjige" << endl;
		cout << "5 ----- Popis izdanih knjiga" << endl;

		cout << "6 ----- Popis knjiga" << endl;

		cout << "7 ----- Popis clanova" << endl;
		cout << "8 ----- Pretraga knjiga" << endl;
		cout << "9 ----- Pretraga clanova" << endl;
		

		cout << "0 ----- Exit;" << endl;
		cin >> izbor;

		switch (izbor) {
		case 1:
			Clan::novi_clan();
			break;
				
		case 2:
			Knjiga::nova_knjiga();
			break;

		case 3:
		    Posudba :: posudba_knjige (); 
			break;
		case 4:
			Posudba::vracanje_knjige(); 
			break;

		case 5:
			Posudba::popis_izdanih_knjiga();
			break;
			
		case 6:
			Knjiga::popis_knjiga();
			break;
			
		case 7:
			 Clan::popis_clanova();
			break;

		case 8:
			Knjiga::pretraga_knjiga(); 
			break;

		case 9:
			Clan::pretraga_clan();
			break;
				
		case 0:

		return 0; 

		default:
			system("cls");
			cout << "Niste unijeli valjani izbor. Pokušajte ponovo.\n";
		}
	} while (izbor != 0);

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
