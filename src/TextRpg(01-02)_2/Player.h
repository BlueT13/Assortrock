#pragma once
#include "FightUnit.h"
#include "Weapon.h"

class Player : public FightUnit
{
public:
	Player();

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



	void StatusRenderStart() override;
	void StatusRenderBase() override;

	inline void SetCurExp(int _CurExp)
	{
		CurExp = _CurExp;
	}

	inline void SetLevelUpExp(int _LevelUpExp)
	{
		LevelUpExp = _LevelUpExp;
	}

	void FightEnd(FightUnit& _Other) override;

	inline void LevelUp()
	{
		MaxHp += 50;
		HpReset();
		MinAtt += 1;
		MaxAtt += 1;
		LevelUpExp += 100;
	}

protected:
	int GetRandomAtt() override;

private:
	int Level = 1;

	// �̰� ���⿡ �����ϸ� ���� �������Ѵ�.
	int CurExp = 0;
	int LevelUpExp = 0;
};

