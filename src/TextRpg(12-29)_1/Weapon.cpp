#include "Weapon.h"
#include <iostream>
#include <conio.h>
#include <time.h>

void Weapon::UpLevel()
{
	int LevelUpPercent = rand() % 101;

	if (LevelUpPercent <= 10)
	{
		printf_s("��ȭ�� �����Ͽ����ϴ�.\n");
		if (EquipUp < 10)
		{
			printf_s("������ ��ȭ��ġ�� �״�� �����˴ϴ�.\n");
		}
		else if (EquipUp >= 10 && EquipUp < 20)
		{
			EquipUp -= 5;
			printf_s("������ ��ȭ��ġ�� 5��ŭ ���������ϴ�.");
		}
		else if (EquipUp >= 20)
		{
			EquipUp = 0;
			printf_s("������ ��ȭ��ġ�� 0���� ���������ϴ�.");
		}
		int Select = _getch();
	}
	else
	{
		printf_s("��ȭ�� �����Ͽ����ϴ�!");
		EquipUp++;
		int Select = _getch();
	}
}

void Weapon::ShowLevel()
{
	while (EquipUp < 30)
	{
		printf_s("����� �ִ� 30������ ��ȭ�� �����մϴ�.\n");
		printf_s("1������ 10�������� �����ص� ��ȭ��ġ�� �������� �ʽ��ϴ�.\n");
		printf_s("10������ 20�������� �����ϸ� ��ȭ��ġ�� 5�� �������ϴ�.\n");
		printf_s("20������ 30�������� �����ϸ� ��ȭ��ġ�� 0�� �˴ϴ�.\n");
		printf_s("---------------------------------------------------------------\n");
		printf_s("���� ����� %d���Դϴ�.\n", EquipUp);
		printf_s("��ȭ�Ͻðڽ��ϱ�?\n");
		printf_s("1. ��.\n");
		printf_s("2. �ƴϿ�.\n");
		int Select = _getch();

		switch (Select)
		{
		case '1':
			UpLevel();
			break;
		case '2':
			return;
		default:
			break;
		}

		if (EquipUp >= 30)
		{
			system("cls");
			printf_s("���Ⱑ �̹� �ִ� ��ȭ ��ġ(30��)�Դϴ�.\n");
			int Select = _getch();
			return;
		}

		system("cls");
	}
}