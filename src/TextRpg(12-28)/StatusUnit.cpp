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
	// 메모리에 관련된 명확한 설명은 안한 상태지만
	// 자신의 맴버함수에서 자신의 맴버변수는 자유롭게 사용이 가능합니다.
	int Size = printf_s("%s ", Name);
	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
	printf_s("공격력 %d~%d\n", MinAtt, MaxAtt);
	printf_s("체력 %d\n", Hp);

	for (int i = 0; i < 50; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
}