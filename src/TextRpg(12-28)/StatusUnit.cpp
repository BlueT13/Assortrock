#define _CRT_SECURE_NO_WARNINGS
#include "StatusUnit.h"
#include <iostream>
#include <cstring>

int StatusUnit::GetSpeed()
{
	return Speed;
}

int StatusUnit::GetMinAtt()
{
	return MinAtt;
}

int StatusUnit::GetMaxAtt()
{
	return MaxAtt;
}

void StatusUnit::SetSpeed(int _Speed)
{
	Speed = _Speed;
}

void StatusUnit::SetMinAtt(int _MinAtt)
{
	MinAtt = _MinAtt;
}

void StatusUnit::SetMaxAtt(int _MaxAtt)
{
	MaxAtt = _MaxAtt;
}

void StatusUnit::SetName(const char* _Name)
{
	std::strcpy(Name, _Name);
}

void StatusUnit::StatusRender()
{
	// �޸𸮿� ���õ� ��Ȯ�� ������ ���� ��������
	// �ڽ��� �ɹ��Լ����� �ڽ��� �ɹ������� �����Ӱ� ����� �����մϴ�.
	int Size = printf_s("%s ", Name);
	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
	printf_s("���ݷ� %d~%d\n", MinAtt, MaxAtt);
	printf_s("ü�� %d\n", Hp);

	for (int i = 0; i < 50; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
}