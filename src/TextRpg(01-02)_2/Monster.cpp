#include "Monster.h"
#include <iostream>

void Monster::StatusRenderEnd()
{
	printf_s("����ġ : %d\n", GetExp());
}

void Monster::FightStart(FightUnit& _Player)
{
	HpReset(/*this*/);
	RandomGold(1000, 10000);
	// �����ϰ� ����ġ�� ���ؾ� �Ѵ�.
	RandomExp(50, 100);
}

void Monster::FightEnd(/*Monster* const this,*/ FightUnit& _Player)
{
	/*NewMonster.*/
	/*this->*/
}