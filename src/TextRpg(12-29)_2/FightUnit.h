#pragma once
#include "StatusUnit.h"

class FightUnit : public StatusUnit
{
public:
	FightUnit();

	// Get
	inline bool IsDeath() const
	{
		return Hp <= 0;
	}

	inline int GetMinAtt() const
	{
		return MinAtt;
	}

	inline int GetGold() const
	{
		return Gold;
	}

	virtual int GetRandomAtt();

	int GetRandomSpeed() const;

	// Fight�� �Լ�
	void DamageLogic(FightUnit& _Unit);

	void DamageRender();

	void HpReset();

	inline int EarnGold()
	{
		Gold += 1000; // ���߿� ���� ������
		return Gold;
	}

protected:
	int CurDamage = 0;

private:
};
