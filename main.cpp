#include <iostream>

using namespace std;

int main()
{
	unsigned char Number = 0b00000001;
	
	//Number = Number << 8; //0b0000 0000 -> 0

	Number = Number << 1; //0b0000 0010 -> 2
	Number = Number << 1; //0b0000 0100 -> 4
	Number = Number << 1; //0b0000 1000 -> 8
	Number = Number << 1; //0b0001 0000 -> 16

	Number = Number << 1; //0b0100 0000 -> 64
	Number = Number << 1; //0b1000 0000 -> 128
	Number = Number << 1; //0b0000 0000 -> 0

	Number = Number >> 1; //0b0000 1000 -> 8
	Number = Number >> 1; //0b0000 0100 -> 4
	Number = Number >> 1; //0b0000 0010 -> 2
	Number = Number >> 1; //0b0000 0001 -> 1
	Number = Number >> 1; //0b0000 0000 -> 0

	return 0;
}