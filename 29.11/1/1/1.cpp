// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	/*int suma=0;
	int broj;


	while (cin>> broj && broj != 0) {
		suma += broj;
		cout << suma;
	
	}*/

	/*int lozinka;
	int tocnalozinka = 1234;

	cout << "unesite lozinku";
	cin >> lozinka;

	for (int i = 0; i < 3; i++) {
		cout << "ovo je vas " << i+1 << "pokusaj" << endl;
		cout << "unesite lozinku";
		cin >>lozinka;
		if (lozinka == tocnalozinka) {
			cout << "lozinka je tocna";
			break;
		}
		else {
			cout << "lozinka je netocna ";
		}
	}*/

	/*int pocetak = 0;

	for (int i = 0; i < 100; i++) {
		cout << pocetak++ << " "<<"bottles of beer on the wall" << endl;
	}*/

	/*int x=1;
	cin>>x; 

	for (int i = 1; i < x; i++) {
		cout << pow(i, 2) << endl;
	}*/

	/*int x = 0;

	for (int i = 1; i<= 10; i++) {
		for (int j = 1; j <=10; j++) {
			cout << i * j << "\t";
		}
		cout << endl; 
	}*/

	/*int x = 1;

	for (x = 3; x < 10;) {

		cout << "beskonacna petlja";
	}*/

	/*int x = 1;
	cin >> x;

	for (int i = 1; i <= x; i++) {
		cout << pow(i, 2) << endl;

	}*/
/*int n;
	int a;
	int b;
	int c;
	int d;
	int e;

	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;


     if(a % 2 == 0, b % 2 == 0, c % 2 == 0, d % 2 == 0, e % 2 == 0, d > e, (n - (a + b + c)) > d) 
		    cout << "PUDING OD COKOLADE" << endl;
	

	 else if (a % 2 == 0, b % 2 == 0, c % 2 == 0, d % 2 == 0, e % 2 == 0, d > e, (n - (a + b + c)) < d)
			cout << "PUDING OD VANILIJE" << endl;*/
	/*int n;
	int a;
	int b;
	int c;
	int d;
	int e;

	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;


	while (1<=n,a,b,c,d,e<=100, a % 2 == 0, b % 2 == 0, c % 2 == 0, d % 2 == 0, e % 2 == 0, d > e, (n - ((a + b + c)/2)) >= d/2) {
		cout << "PUDING OD VANILIJE" << endl;
		break;
	}



	while (1 <= n, a, b, c, d, e <= 100, a % 2 == 0, b % 2 == 0, c % 2 == 0, d % 2 == 0, e % 2 == 0, d > e, (n - ((a + b + c)/2)) <d/2) {
		cout << "PUDING OD COKOLADE" << endl;
		break;*/

    /*int AO;
	int BO; 
	int AC1;
	int AC2;
	int BC1;
	int BC2;

	cin >> AO;
	cin >> BO; 
	cin >> AC1;
	cin >> AC2;
	cin >> BC1;
	cin>> BC2;

	while (1 <= AO, BO, AC1, AC2, BC1, BC2 <= 50, AO > BO && AC1 >= AC2) {
		cout << AC2;
		break;
	}

	while (1 <= AO, BO, AC1, AC2, BC1, BC2 <= 50, AO > BO && AC1 <= AC2) {
		cout << AC1;
		break;
	}

	while (1 <= AO, BO, AC1, AC2, BC1, BC2 <= 50, AO < BO && BC1 >= BC2) {
		cout << BC2;
		break;
	}

	while (1 <= AO, BO, AC1, AC2, BC1, BC2 <= 50, AO < BO && BC1 <= BC2) {
		cout << BC1;
		}
		break;*/
	
int A1;
int A2;
int B1;
int B2; 

cin >> A1;
cin >> A2;
cin >> B1;
cin >> B2;


while (1 <= A1 <= A2 <= 31, 1 <= B1 < B2 <= 31, B1 != A1 && B1 != A2, B1<A1||B1>A2) {
	cout << B1;
	break;
}

while (1 <= A1 <= A2 <= 31, 1 <= B1 < B2 <= 31, B2 != A1 && B2 != A2, B2<A1 || B2>A2) {
	cout << B2;
	break;
}
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
