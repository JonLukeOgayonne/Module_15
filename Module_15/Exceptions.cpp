/*
	JonLuke R. Ogayonne
	CIS 1202 501
	May 01, 2021
*/
#include<iostream>
#include<cctype>
using namespace std;
// Prototype for program.
char character(char, int);
// Program starts at main.
int main() {
	// Character and Integer for the main.
	char letter = 'a', charValue;
	int number = 1;
	// Try/catch construct to determine the outcome letter or exception.
	try
	{
		charValue = character (letter, number);
		cout << " '" << charValue << "'" << endl;
	}
	catch (string exception)
	{
		cout << exception << endl;
	}
	// Terminate program.
	return 0;
}
// Function to calculate letter value and range.
char character(char start, int offset) {
	// If statement to throw if character is not valid.
	if (start < 'A' || start > 'Z' && start < 'a' || start > 'z') {
		string invalidCharacterException = " ERROR! Invalid Charactor.\n";
		throw invalidCharacterException;
	}
	// Add the offset to the character ascii value.
	int result = offset + static_cast<int>(start);
	// Convert integer result into character value.
	static_cast<char>(result);
	// Test if character value is uppercase.
	if (isupper(start)) {
		if (!isupper(result)) {
			string invalidRangeException = " ERROR! Invalid range.\n";
			throw invalidRangeException;
		}
	}
	// Test if character value is lowercase.
	else if (islower(start)) {
		if (!islower(result)) {
			string invalidRangeException = " ERROR! Invalid range.\n";
			throw invalidRangeException;
		}
	}
	// Return result.
	return result;
}
