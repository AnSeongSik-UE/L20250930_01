#include <iostream>

using namespace std;

class State
{
public:
	int ID;
	string StateName;
};

class Transition
{
public:
	int CurrentState;
	string Condition;
	int NextState;
};

class FSM
{
public:
	FSM()
	{
		States[0].ID = 1;
		States[0].StateName = "��ȸ";
		States[1].ID = 2;
		States[1].StateName = "�߰�";
		States[2].ID = 3;
		States[2].StateName = "����";
		States[3].ID = 4;
		States[3].StateName = "����";
	}
	State States[4];
	Transition Transitions[5];

	State Transit(State InState, string Condition);
};

int main()
{
	FSM MyFSM;
	MyFSM.Transit();


	return 0;
}