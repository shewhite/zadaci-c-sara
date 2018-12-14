// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include <string>
#include <queue>

using namespace std; 

void unos() {

	stack <char> unos; 
	string rijec = "";
	cin >> rijec;
	string obrnuto = "";

	for (int i = 0; i < rijec.length(); i++) {
		unos.push(rijec[i]);
	}

	for (int i = 0; i < rijec.length(); i++) {
		obrnuto += unos.top();
		unos.pop();
	}

	if (obrnuto == rijec) {
		cout << rijec<< " " << obrnuto << " Bravo imate palindrom" << endl; 
	}
	else {
		cout << rijec << " "<< obrnuto << " nazalost nista" << endl;
	}

}

void ulazakpacijenata(string pacijenti, queue red) {
	 
	queue <string> red; 
	string pacijenti =""; 

	cout << "Ulazi u cekaonici: " << endl;

	for (int i = 1; i <= 10; i++) {
		cin >> pacijenti;

		red.push(pacijenti); 
	}

	
}
void odlazakkodlijecnika(string pacijenti, queue red) {

	cout << "Kod lijecnika ulazi: " << endl; 

	red.front(pacijenti); 

}

int main()
{
	ulazakpacijenata(); 

	odlazakkodlijecnika(); 

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
