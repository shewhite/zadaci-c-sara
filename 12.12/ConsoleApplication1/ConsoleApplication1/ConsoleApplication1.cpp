// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std; 

void bubblesort(int lista[], int velicina) {

	int temp, j; 
	bool bilazamjena = true; 

	for (int i = 0; bilazamjena == true; i++) {
		bilazamjena = false; 
		for (j = 0; j < velicina - 1 - i; j++) {

			if (lista [j] > lista[j + 1]) {
				temp = lista[j]; 
				lista[j] = lista[j + 1];
				lista[j + 1] = temp; 
				bilazamjena = true; 
			}
		}
	}
}
void selectionsort(int lista[], int velicina) {
	
	int  min, i, j, temp; 
	
	for (i = 0; i < velicina; i++) {
		min = i;
		
		for (int j = i+1; j < velicina; j++) {
			
			if (lista [j] < lista[min]) {
				min = j;		
				
			}			
		}
		temp = lista[i];
		lista[i] = lista[min];
		lista[min] = temp; 	
		
	}
}
void insertionsort(int lista[], int velicina) {

	int element, i, j; 

	for (i = 1; i < velicina; i++) {
		element = lista [i]; 
		j = i - 1;

		while (j >= 0 && lista [j] > element) {
			lista [j+1] = lista [j];
			j = j - 1; 		
		}
		lista[j + 1] = element; 
	}
	
}
void insertionsort2(int lista[], int velicina) {

	int element, i, j;

	for (i = 0; i < velicina; i++) {
		element = lista[i];

		for (j = i; j >= 1 && lista[j - 1] > element; j--) {
			lista[j] = lista[j - 1];

		}
		lista[j] = element;
	}
}


/*void goldbachovaslutnja() {

	int x; 
	int a, b; 

	int *lista = new int[x];


	for (int i = 2; i > 2 ; i++) {
		x = i; 
		x = a + b; 
		if (i%i==0 && i!= )
		lista[i] = rand();
		cout << lista[i] << endl;
	}

	do {
		
		cout 
	

	}
}*/

int main()
{
	srand(time(NULL)); 

	int x; 

	cout << "Koliki unos zelis imati" << endl; 
	cin >> x; 

	int *lista = new int[x];

	
	for (int i =0; i < x; i++) {
		lista[i] = rand();
		cout << lista[i] << endl;
		
	}

	cout << "stisni enter i sortiraj " << endl; 

	cin.ignore(); 
	cin.ignore(); 

	insertionsort(lista, x); 

	for (int i = 0; i < x; i++) {
		cout << lista[i]<<endl;
	}
	

	
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
