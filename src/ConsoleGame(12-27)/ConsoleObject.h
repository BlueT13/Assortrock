#pragma once
#include "Math.h"

// �ڽĵ��� ���������� �������� ����� ����� ���� �Ѵ�.
class ConsoleObject
{
public:
	int2 GetPos();

	char GetRenderChar();

	void SetPos(const int2& _Pos);

	void SetChar(char _char);

protected:
	int2 Pos = { 0, 0 };
	char RenderChar = '@';

private:

};

