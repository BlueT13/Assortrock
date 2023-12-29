#include "FightZone.h"
#include <conio.h>
#include <iostream>
#include <time.h>
#include <random>


bool FightZone::FightLogic(FightUnit& _First, FightUnit& _Second, FightUnit& _Top, FightUnit& _Bot)
{
	{
		int Input = _getch();
	}

	system("cls");
	_Second.DamageLogic(_First);
	_Top.StatusRender();
	_Bot.StatusRender();
	_First.DamageRender();
	if (true == _Second.IsDeath())
	{
		printf_s("���� ����\n");
		return true;
	}


	{
		int Input = _getch();
	}

	system("cls");
	_First.DamageLogic(_Second);
	_Top.StatusRender();
	_Bot.StatusRender();
	_First.DamageRender();
	_Second.DamageRender();
	if (true == _First.IsDeath())
	{
		printf_s("���� ����\n");
		return true;
	}
	{
		int Input = _getch();
	}
	system("cls");

	return false;
}

void FightZone::Fight(FightUnit& _Player)
{
	NewMonster.SetName("Monster");

	_Player.SetMinAtt(10);
	_Player.SetMaxAtt(20);
	NewMonster.SetMinAtt(5);
	NewMonster.SetMaxAtt(10);

	_Player.SetSpeed(20);
	NewMonster.SetSpeed(10);

	while (true)
	{
		_Player.StatusRender();
		NewMonster.StatusRender();

		// ���� �İ��� ���� ����
		// ���ǿ� ����
		srand(time(NULL));
		int playerRandomSpeed = rand() % _Player.GetSpeed();
		int monsterRandomSpeed = rand() % NewMonster.GetSpeed();

		bool IsEnd = false;

		if (playerRandomSpeed >= monsterRandomSpeed)
		{
			printf_s("Player�� ����");
			IsEnd = FightLogic(_Player, NewMonster, _Player, NewMonster);
		}
		else
		{
			printf_s("Monster�� ����");
			IsEnd = FightLogic(NewMonster, _Player, _Player, NewMonster);
		}

		if (true == IsEnd)
		{
			return;
		}
	}

}