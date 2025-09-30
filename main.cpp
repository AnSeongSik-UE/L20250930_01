#include <iostream>

using namespace std;

int main()
{
	unsigned char A = 0b00000001;
	unsigned char B = 0b00000000;

	cout << (A & B) << endl;	// AND
	cout << (A | B) << endl;	// OR
	cout << (~A) << endl;		// NOT
	cout << (A ^ B) << endl;	// XOR

	return 0;
}