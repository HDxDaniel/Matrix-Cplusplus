#include <iostream>
#include "include/matrix.h"

using namespace std;

int main(){

	// New matrix, size: 10x10
	matrix<int> m(10, 10);

	// Inserts a value on the specified position and shows its content
	m[0][2] = 95;
	cout << m[0][2] << endl;

	// Makes the matrix bigger
	m.resize(20, 20);

	// Inserts a new value and shows its value
	m[11][8] = 100;
	cout << m[0][2] << ' ' << m[11][8] <<  endl;

	// Copy constructor
	matrix<int> m2(m);
	cout << m[11][8] << endl;


	// New Empty matrix
	matrix<bool> test;

	// Resize the empty matrix
	test.resize(10, 10);

	// Inserts new value and show its content
	test[5][5] = 1;
	cout << test[5][5] << endl;

	//
	cin.ignore();

	return 0;
}