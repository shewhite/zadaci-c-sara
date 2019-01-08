// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <datetimeapi.h>

using namespace std; 

class Bankomat {
private: 
	float stanje_racuna; 
	int pin; 
	string imekorisnika; 

public: 

	Bankomat() {
		stanje_racuna = 0; 
	}

	void uplacivanje(float a) {
		cout << " Unesite iznos koji želite uplatiti" << endl; 
		cin >> a; 
		stanje_racuna = stanje_racuna + a;
	}

	void isplata(float b) {
		cout << "Unesite iznos koji želite podignuti" << endl; 
		cin >> b; 

		if (b > stanje_racuna) {

			cout << " Nemate dovoljno sredstava na raèunu." << endl; 
		}

		else {
			stanje_racuna = stanje_racuna - b;

		}
	}
		
};

class Zaposlenik {

private:
	
	int id; 
	string imeiprezime;
	string radnomjesto;
	float placa; 

		
public: 
	
	Zaposlenik(); 
	Zaposlenik(int id, string imeiprezime, string radnomjesto, float placa); {
		imeiprezime = n; 
		id = idbroj; 
		radnomjesto = ""; 
		placa = 0; 
	}

	
	void set_imeiprezime() {
		imeiprezime = n; 
	}

	void set_id() {
		id = id broj; 
	}

	string get_IMEIPREZIME() {
		return imeiprezime; 
	}

	string get_radnomjesto() {
		return radnomjesto; 
	}

	float get_placa() {
		return placa;
	}

	void povisica (float a) {
		cin >> a; 
		placa = placa + a; 
	}

};

class Racun {
private: 

	int broj_racuna; 
	float stanje_racuna; 

public:

	Racun(); 

	void set_broj_racuna() {
		broj_racuna = 0; 
	}

	void set_stanje_racuna() {
		stanje_racuna = 0;
	}

	int get_broj_racuna() {
		return broj_racuna; 
	}

	float get_stanje_racuna() {
		return stanje_racuna; 
	}

	void uplata (float a) {
		cout << " Unesite iznos koji želite uplatiti" << endl;
		cin >> a;
		stanje_racuna = stanje_racuna + a;
	}

	void isplata(float b) {
		cout << "Unesite iznos koji želite podignuti" << endl;
		cin >> b;

		if (b > stanje_racuna) {

			cout << " Nemate dovoljno sredstava na raèunu." << endl;
		}

		else {
			stanje_racuna = stanje_racuna - b;

		}
	}
	   
};

class Tekuci_racun : public Racun {
private:
	string tip; 

public: 

	Tekuci_racun() {

	}

};

class Stedni_racun : public Racun {
private:
	int broj_racuna;
	float stanje_racuna;
	date
public:

	Stedni_racun() {

	}

	void isplata(float c) {
		cout << "Unesite iznos koji želite podignuti" << endl;
		cin >> c;

		if (c > stanje_racuna) {

			cout << " Nemate dovoljno sredstava na raèunu." << endl;
		}

		else {

			if 
			stanje_racuna = stanje_racuna - c;

		}
	}


};

int main()
{




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
