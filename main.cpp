#include <iostream>

using namespace std;

// 세상 - 벽과 바닥으로 이루어져 있음, 플레이어와 몬스터와 목적지가 있음
// 벽 - 통과할 수 없음
// 세상은 10*10
// 플레이어 - 상하좌우 이동
// 몬스터 - 상하좌우 이동
// 목적지에 플레이어가 도착시 게임이 끝남

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