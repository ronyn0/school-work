// ConsoleApplication1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void swap(int &a, int &b);
string checkEven(int x);
void addOne(int &x);
bool checkPrime(int x);
void addFive(int &x);
void addFive(double &x);
void getNameAge(string &name, int &age);

int main()
{
	int a = 5;
	double b = 5.5;
	cout << "a: " << a;
	cout << "\nb: " << b << endl;

	addFive(a);
	addFive(b);
	cout << "a: " << a;
	cout << "\nb: " << b << endl;

}

void swap(int &a, int &b) {		//& points to the address of 'a', not just a variable a.
	int dummy = a;
	a = b;
	b = dummy;
}

string checkEven(int x) {		//extra credit 1.
	if (x % 2 == 0)
		return "EVEN";
	else if (x % 2 == 1)
		return "ODD";
	else
		return "DOES NOT COMPUTE";
}
bool checkPrime(int x) {		//extra credit 2.
	if (x % 2 == 0)
		return false;
	else {
		for (int i = 2; i < sqrt(x); i++) {
			if (x % i == 0)
				return false;
		}
	}
	return true;
}
void addOne(int &x) {
	x++;
}
void addFive(int &x) {			//extra credit 3a.
	x += 5;
}
void addFive(double &x) {		//extra credit 3b.
	x += 5;
}
void getNameAge(string &name, int &age) {
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
}
