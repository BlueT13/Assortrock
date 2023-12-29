#pragma once
#include "FightUnit.h"
#include "Weapon.h"

class Player : public FightUnit
{
public:
	Player();

	inline int GetHp()
	{
		return Hp;
	}

	void SetHp(int _Hp)
	{
		Hp = _Hp;
	}

	// �̷� ��쿡 public���� �Ѵ�.
	// ������ ��� �ִ� ��쿡��.
	// ���� �̷���.
	// �����ͷ� �ؾ� �մϴ�.

	// ���� ������� �������� ����
	// �̰� ������ �ؾ�����
	// �����ͷ� �ؾ�����.

	// ���� �����ϰų� �������� ���� ���ɼ��� �ִٸ� => ������
	// ����� ������� �ʾƾ� �ϸ� => ����
	// ������ �����Ҵ��� ����� �ʾұ� ������ 
	Weapon Weapon;

	int GetRandomAtt() override;
};

