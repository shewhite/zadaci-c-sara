// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "zivotinje.h"


using namespace std; 

class Kutija {
public:
	int x;
	void ispis();
};

void Kutija::ispis() {
	cout << x << endl; 
	}

class Covjek {
public:
	string hodanje;
	string trcanje;
	string lezanje; 

	void ispis(); 
};

void Covjek::ispis() {
	cout << hodanje << endl; 
	cout << trcanje << endl; 
	cout << lezanje << endl; 
}

class Kocka {
public:
	double visina;
	double sirina; 
	double dubina; 

	void otvori(); 
	void zatvori(); 
};

void Kocka::otvori() {
	cout << visina << endl; 
	cout << sirina << endl; 
	cout << dubina << endl; 
}

void Kocka::zatvori() {
	cout << "Zatvorili ste Kocku" << endl; 
}

class Automobil {
private:
	string marka=""; 
	string model = "";
	int broj_sasije= 0;

public:
	void upali(); 
	void ugasi();
	void ubrzaj(); 
	void uspori(); 

	void setmarka(); 
	void setmodel(); 
	void setbroj_sasije(); 

	string getmarka();
	string getmodel();
	int getbroj_sasije();
};

void Automobil::upali() {
	cout << marka << endl; 
	cout << model << endl;
	cout << broj_sasije << endl; 
	
}

void Automobil ::setmarka() {
	marka = "Volvo";
}

class Box {
public:
	int x; 

	Box();
	~Box();
};

Box::Box() {
	cout << "Stvoren je objekt box" << endl; 
}

Box::~Box() {
	cout << "Uništen je objekt kutija" << endl; 
}

class Boxx {
public:
	static int broj_boxx; 

	Boxx(); 
	static void koliko_boxx(); 

};

Boxx::Boxx() {
	broj_boxx++;
}
 
void Boxx::koliko_boxx() {
	cout << "Imamo " << broj_boxx << " box-eva" << endl; 
}

int Boxx::broj_boxx = 0; 

class Node {
		void *info;
		Node *next;

	public:

		static int broj_nodova;

		static void broj_nodova(); 

		Node(void *v) {
			info = v; next = 0; 
		}
		void put_next(Node *n) {
			next = n;
		}
		Node *get_next() { 
			return next; 
		}
		void *get_info() {
			return info;
		}
};

void Node::broj_nodova() {
	cout << "Imamo " << broj_nodova << " nodova." << endl; 
}

class povezanalista {
	Node*start;
};

Node::~Node(){}



int main()
{






	/*cout << Boxx::broj_boxx << endl;
	Boxx kutija; 
	Boxx kutija2; 
	cout << Boxx::broj_boxx << endl; 

	Boxx kutija3; 
	Boxx::koliko_boxx(); */

	   	  
	/*Kocka Plava; 
	Plava.dubina = 2; 
	Plava.sirina = 3; 
	Plava.visina = 3; 
	Plava.otvori(); 
	Plava.zatvori(); 

	Kocka Bijela; 
	Bijela.dubina = 4; 
	Bijela.sirina = 4; 
	Bijela.visina = 4; 
	Bijela.otvori(); 
	Bijela.zatvori();

	Kocka Crvena; 
	Crvena.dubina = 3.5; 
	Crvena.sirina = 3.5; 
	Crvena.visina = 3.5; 
	Crvena.otvori(); 
	Crvena.zatvori();*/

	   	 
	/*Kutija box;
	box.x = 100;
	box.ispis(); */

	/*Covjek Pero; 
	Pero.trcanje = "Trcim";
	Pero.hodanje = "Hodam"; 
	Pero.lezanje = "Lezim"; 
	Pero.ispis(); */

	
	/*Zivotinja Navike; 
	Navike.Lav = "Lovi";
	Navike.Zmaj = "Riga vatru";
	Navike.Mrav = "Skuplja hranu"; 
	Navike.ispis(); */

	

	
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
