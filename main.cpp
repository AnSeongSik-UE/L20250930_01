#include <iostream>

using namespace std;

// ���� - ���� �ٴ����� �̷���� ����, �÷��̾�� ���Ϳ� �������� ����
// �� - ����� �� ����
// ������ 10*10
// �÷��̾� - �����¿� �̵�
// ���� - �����¿� �̵�
// �������� �÷��̾ ������ ������ ����

class Character
{
public:
	int Direction;

	void Move(int InDirection)
	{

	}
};

class World
{
public:
	int X;
	int Y;
	int Floor;
	int Wall;
	Character Player;
	Character Monster;
	int Goal;

	void BlockMove(Character InCharacter, int Wall)
	{

	}

	void EndGame(Character InPlayer, int Goal)
	{

	}

};


int main()
{

	return 0;
}