#include "FightUnit.h"
#include <iostream>

FightUnit::FightUnit()
{
}

void FightUnit::DamageLogic(const FightUnit& _Unit)
{
	int UnitRandDamage = _Unit.MinAtt + rand() % (_Unit.MaxAtt - _Unit.MinAtt + 1);

	Hp -= UnitRandDamage;
}

void FightUnit::DamageRender()
{
	printf_s("%s �� %d~%d�� ���ݷ����� �����߽��ϴ�.\n", Name, MinAtt, MaxAtt);
}