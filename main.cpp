#include <iostream>

using namespace std;

// ���� - ���� �ٴ����� �̷���� ����, �÷��̾�� ���Ϳ� �������� ����
// �� - ����� �� ����
// ������ 10*10
// �÷��̾� - �����¿� �̵�
// ���� - �����¿� �̵�
// �������� �÷��̾ ������ ������ ����

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