/*
	JonLuke R. Ogayonne
	CIS 1202 501
	May 01, 2021
*/
#include<iostream>
using namespace std;
// Prototype for program.
char character(char, int);
// Program starts at main.
int main() {
	//
	char letter = 'a';
	int number = 1;
	//
	try
	{
		character(letter, number);
		cout << " 'b'" << endl;
	}
	catch (const std::exception&)
	{

	}
	// Terminate program.
	return 0;
}
char character(char start, int offset) {
	return start;
}