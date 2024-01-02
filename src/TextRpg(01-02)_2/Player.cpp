#include "Player.h"
#include <iostream>

Player::Player()
{
	// ���� �׽�Ʈ �ڵ�
	Weapon.SetName("Steel Sword");
	Weapon.SetAtt(10);

	SetCurExp(0);
	SetLevelUpExp(100);
}

void Player::StatusRenderStart()
{
	printf_s("���� %d\n", Level);
	printf_s("����ġ %d/%d\n", CurExp, LevelUpExp);
}

void Player::StatusRenderBase()
{
	printf_s("���ݷ� %d~%d + %d(���� ���ݷ�) + %d(��ȭ ��ġ)\n", MinAtt, MaxAtt, Weapon.GetAtt(), Weapon.GetEquipUp());
	printf_s("ü�� %d/%d\n", Hp, MaxHp);
	printf_s("������ %d\n", Gold);
}

int Player::GetRandomAtt()
{
	CurDamage = FightUnit::GetRandomAtt() + Weapon.GetAtt() + Weapon.GetEquipUp();
	return CurDamage;
}

void Player::FightEnd(FightUnit& _Other)
{
	int Gold = _Other.GetGold();
	printf_s("�÷��̾ %d ��带 �������ϴ�.\n", Gold);
	printf_s("�÷��̾ %d ����ġ�� ������ϴ�.\n", _Other.GetExp());
	AddGold(Gold);

	// ���Ͱ� �� ����ġ�� _Other.GetExp();
	// AddExp(_Other.GetExp());
	// ���� ����ġ GetExp();
	CurExp += _Other.GetExp();
	if (CurExp >= LevelUpExp)
	{
		Level++;
		CurExp = CurExp % LevelUpExp;
		LevelUp();
	}

	// ���� �ɷ�ġ�� �󸶳� ��½�ų��.
	// �� ��ȹ���� ����. ��¸� ��Ű����.

	// LevelUpExp �񱳸� �ؼ�



	// Monster
}