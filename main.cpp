#include <iostream>

using namespace std;

#define WorldStatic		0b00000001
#define WorldDynamic	0b00000010
#define Pawn			0b00000100
#define PhysicsBody		0b00001000

int main()
{
	unsigned char MyActorType = Pawn | PhysicsBody;
	
	// ´À¸²
	//string MyActorTypes = "Pawn, Physics";
	//if (MyActorTypes.find("Pawn"))
	//{
	//	'P' == 'P' && 'a' == 'a';
	//}

	if (MyActorType & Pawn)
	{
		cout << "Pawn" << endl;
	}
	else
	{
		cout << "Not Pawn" << endl;
	}


	return 0;
}