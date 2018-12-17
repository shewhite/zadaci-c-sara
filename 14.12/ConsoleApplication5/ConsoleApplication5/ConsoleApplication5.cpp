// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
#include <queue>

using namespace std;

struct pacijent {
	int MBO;
	string ime;
	string prezime;
	vector<string> lijekovi;
};

void menu(vector<pacijent> &pacijenti);
void unospacijenti(vector<pacijent> &pacijenti);
void ispispacijenti(vector<pacijent> &pacijenti);
void shellSort(vector<pacijent> &pacijenti, int start, int stop);
void citanjepacijenti(vector<pacijent> &pacijenti);
void pretragaMBO(vector <pacijent> pacijenti);
void sustavcekaonice();
void dolazakpacijenata(queue <string> pacijentii);
void pregledpacijenata(queue <string> pacijentii);
void dodavanjelijekova(vector <pacijent>& pacijenti);

int main()
{
	bool programStarted = true;
	vector <pacijent> pacijenti;
	if (programStarted) {
		citanjepacijenti(pacijenti);
		programStarted = false;
	}
	menu(pacijenti);


}
void menu(vector<pacijent> &pacijenti) {

	int s = 0;
	system("cls");
	cout << "**************  ORDINACIJA DR. FRANJUL *******************\n\n\n" << endl;
	cout << " 1. Unos novih pacijenata u kartoteku\n 2. Ispis svih pacijenata\n 3. Pretraga pacijenata po MBO" << endl;
	cout << " 4. Sustav cekaonice\n 5. Dodavanje recepata za lijekove na korisnicki racun pacijenta\n 0. Izlaz " << endl;


	int x;
	cin >> x;
	switch (x) {

	case 1:
		system("cls");
		unospacijenti(pacijenti);
		break;

	case 2:
		system("cls");
		ispispacijenti(pacijenti);
		break;

	case 3:
		system("cls");
		pretragaMBO(pacijenti);
		break;

	case 4:
		system("cls");
		sustavcekaonice();
		break;

	case 5:
		system("cls");
		dodavanjelijekova(pacijenti);
		break;

	case 0:
		exit(0);

	default:
		system("cls");
		cout << "Niste unijeli valjani izbor. Pokušajte ponovo.\n";
	}

}
void unospacijenti(vector <pacijent> &pacijenti) {

	pacijent novipacijent;

	cout << "Unesite MBO pacijenta: ";
	cin >> novipacijent.MBO;

	for (int i = 0; i < pacijenti.size(); i++) {
		if (novipacijent.MBO == pacijenti[i].MBO) {
			cout << "ID vec postoji, izaberite drugi." << endl;
			cin.ignore();
			unospacijenti(pacijenti);

		}

	}

	cout << "Unesite ime pacijenta: ";
	cin >> novipacijent.ime;

	cout << "Unesite prezime pacijenta: ";
	cin >> novipacijent.prezime;


	pacijenti.push_back(novipacijent);

	ofstream sprem;
	sprem.open("pacijenti.txt", ofstream::out | ofstream::app);
	sprem << novipacijent.MBO << "," << novipacijent.ime << "," << novipacijent.prezime << endl;

	cout << "Povratak na izbornik enter" << endl;
	cin.ignore();

	menu(pacijenti);

}
void ispispacijenti(vector <pacijent> &pacijenti) {

	for (int i = 0; i < pacijenti.size(); i++) {
		cout << i + 1 << ". " << " *   MBO: " << pacijenti[i].MBO << " *   Ime: " << pacijenti[i].ime << " *   Prezime: " << pacijenti[i].prezime << endl;

		if (pacijenti[i].lijekovi.size() == 0) {
			cout << "Pacijent nema lijekova" << endl;
		}
		else {
			for (int j = 0; j < pacijenti[i].lijekovi.size(); j++) {
				cout << "Lijek: " << pacijenti[i].lijekovi[j] << endl;
			}
		}
	}
	cout << "Povratak na izbornik enter" << endl;
	cin.ignore();
	cin.ignore();
	menu(pacijenti);
}
void shellSort(vector<pacijent>& pacijenti, int start, int stop)
{
	bool flag = true;
	pacijent temp;

	while (flag || (stop > 1))
	{
		flag = false;
		stop = (stop + 1) / 2;
		int loopend = pacijenti.size() - stop;
		int startstop = start + stop;
		for (start = 0; start < loopend; start++)
		{
			if (pacijenti[startstop].MBO <= pacijenti[start].MBO)
			{
				temp = pacijenti[startstop];
				pacijenti[startstop] = pacijenti[start];
				pacijenti[start] = temp;
				flag = true;
			}
		}
	}
}
void citanjepacijenti(vector <pacijent> &pacijenti) {

	string line;
	ifstream citanje;
	citanje.open("pacijenti.txt");
	while (getline(citanje, line)) {
		size_t pos = 0, prev = 0;
		int c = 0;
		pacijent novipacijent;
		do
		{
			pos = line.find(",", prev);

			if (pos == string::npos) {
				pos = line.length();

			}

			string token = line.substr(prev, pos - prev);
			if (!token.empty()) {
				prev = pos + 1;
				if (c == 0) {
					novipacijent.MBO = stof(token);
				}
				else if (c == 1) {
					novipacijent.ime = token;
				}
				else if (c == 2) {
					novipacijent.prezime = token;
				}

				c++;
			}
		} while (pos < line.length() && prev < line.length());

		pacijenti.push_back(novipacijent);
	}
	shellSort(pacijenti, 0, pacijenti.size());
}
void pretragaMBO(vector <pacijent> pacijenti) {
	int pretraga;
	bool found = false;
	cout << "Unesi MBO pacijenta:" << endl;
	cin >> pretraga;

	for (int i = 0; i < pacijenti.size(); i++) {
		if (pacijenti[i].MBO == pretraga) {
			cout << " *   MBO: " << pacijenti[i].MBO << " *   Ime: " << pacijenti[i].ime << " *   Prezime: " << pacijenti[i].prezime << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Nema pacijenta sa tim maticnim brojem";
	}

}
void dodavanjelijekova(vector <pacijent>& pacijenti) {
	int mboToFind;
	bool found = false;
	cout << "Unesi MBO pacijenta: " << endl;
	cin >> mboToFind;

	for (int i = 0; i < pacijenti.size(); i++) {

		if (pacijenti[i].MBO == mboToFind) {
			cout << " *   MBO: " << pacijenti[i].MBO << " *   Ime: " << pacijenti[i].ime << " *   Prezime: " << pacijenti[i].prezime << endl;
			bool addMore = true;

			while (addMore) {
				cout << "Dodaj recept za lijek" << endl;
				string lijek;
				cin >> lijek;
				pacijenti[i].lijekovi.push_back(lijek);
				int addInput;
				system("cls");

				cout << "1. Dodaj jos\n2.Vrati se u glavni izbornik";
				cin >> addInput;
				if (addInput == 1)
					addMore = true;
				else addMore = false;
			}

			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Nema pacijenta sa tim maticnim brojem" << endl;
		cout << "1. Dodaj recept\n2. Vrati se u glavni izbornik";
		int i;
		cin >> i;
		if (i == 1)
			dodavanjelijekova(pacijenti);
	}
	else
		menu(pacijenti);
}

void sustavcekaonice() {

	queue <string> pacijentii;

	int input = 0;
	while (true) {
		cout << "1. Unos novih pacijenata\n2. Trenutni red pacijenata\n\n: ";
		cin >> input;
		switch (input) {
		case 1:
			dolazakpacijenata(pacijentii);
			break;
		case 2:
			pregledpacijenata(pacijentii);
			break;
		default:
			break;
		}
	}
}
void dolazakpacijenata(queue <string> pacijentii) {
	string ime = "";
	while (ime != "STOP") {
		cout << "\nUnesite ime pacijenta (\"STOP\" za prekid) : ";
		cin >> ime;
		if (ime != "STOP")
			pacijentii.push(ime);
	}
	system("PAUSE");
}
void pregledpacijenata(queue <string> pacijentii) {
	int input = 1;

	cout << "\nTrenutno na pregledu : " << pacijentii.front();
	while (input == 1) {
		cout << "\nPrimiti sljedeceg pacijenta?\n1. DA\n2. NE\n\n: ";
		cin >> input;
		if (input == 1 && pacijentii.size() > 0) {
			cout << "\n" << pacijentii.front() << " je bio na pregledu..";
			pacijentii.pop();
			cout << "\nA sada je " << pacijentii.front();
		}
		else if (pacijentii.size() == 0)
			cout << " \nNema vise pacijenata u cekaonici.\n";
	}
	system("PAUSE");
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil