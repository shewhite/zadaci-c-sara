// Singleton Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std; 

class Singleton {
private:
	static bool instance_flag;
	static Singleton *instance; 
	Singleton() {

	}

public:
	static Singleton*get_instance();
	void my_method();
	~Singleton() {
		instance_flag = false; 
	}
};

bool Singleton::instance_flag = false;
Singleton *Singleton::instance = nullptr;

Singleton *Singleton::get_instance() {
	if (!instance_flag) {
		instance = new Singleton();
		instance_flag = true;

	}
	return instance;
}


void Singleton::my_method() {
	cout << "Samo sam jedan na svijetu i to na adresi: " << this << endl;
}

int main()
{
	Singleton *sam_sam_na_svijetu = Singleton::get_instance();


	sam_sam_na_svijetu->my_method();
	ž
		cout << endl; 

	system("pause");

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
