#pragma once
#include "ZoneBase.h"
#include "Monster.h"

class FightZone : public ZoneBase
{
public:
	FightZone(int _Levlel);

	// ����� ���ö������� ����
	// ���漱��
	// �÷��̾� ����� ���⿡ �����ϱ� �Ⱦ.
	void In(class Player& _Player, int _Level);

private:
	Monster NewMonster = Monster();

	// �ѹ��� ����
	// ����� ������ ������ �����ؾ� �մϴ�.
	bool FightLogic(FightUnit& _Left, FightUnit& _Right, FightUnit& _Top, FightUnit& _Bot);
};

