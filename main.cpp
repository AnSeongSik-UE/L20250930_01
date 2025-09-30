#include <iostream>

using namespace std;

// 세상 - 벽과 바닥으로 이루어져 있음, 플레이어와 몬스터와 목적지가 있음
// 벽 - 통과할 수 없음
// 세상은 10*10
// 플레이어 - 상하좌우 이동
// 몬스터 - 상하좌우 이동
// 목적지에 플레이어가 도착시 게임이 끝남

class Goal
{
public:
};

class Monster
{
public:
	void Move()
	{

	}
};

class Player
{
public:
	void Move()
	{

	}
};

class Wall
{
public:
};

class Floor
{
public:
};

class World
{
public:
	Player MyPlayer;
	Monster MyMonster;
	Wall MyWall[100];
	Floor MyFloor[100];
	Goal MyGoal;

	void GameOver()
	{

	}
};

class Engine
{
public:
	World MyWorld;

	void Run()
	{
		while(true)
		{
			Input();
			Tick();
			Render();
		}
	}

	void Input()
	{

	}
	void Tick()
	{

	}
	void Render()
	{

	}
};

int main()
{
	//Init()
	Engine* MyEngine = new Engine;
	MyEngine->Run();

	delete MyEngine;
	MyEngine = nullptr;

	return 0;
}