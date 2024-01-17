#include "Head.h"
#include <conio.h>
#include <ConsoleEngine/EngineCore.h>
#include "BodyManager.h"
#include "Body.h"

// 
// 1. ���� Ư�� �������� �����ߴٸ� ���� �Է¶��� �� �ݴ�������δ� ������ ����.
//    ���� �̵��ϴ� ������ �ݴ�������δ� ���� �ȵȴ�.
// 2. ���� �̵��� �ؼ� CurBody�� ȹ���ߴٸ� �� �������� �� �ٵ�� ���� ����;� �Ѵ�.

void Head::Update()
{
	int InputCount = _kbhit();
	if (0 == InputCount)
	{
		return;
	}

	int Select = _getch();

	// InputCount = _kbhit();

	// X Y
	// 1 0

	int2 PrevHeadPos = GetPos();

	switch (Select)
	{
	case 'A':
	case 'a':
		if (MoveDirection == Right)
		{
			return;
		}
		else
		{
			AddPos(Left);
			MoveDirection = Left;
		}
		break;
	case 'S':
	case 's':
		if (MoveDirection == Up)
		{
			return;
		}
		else
		{
			AddPos(Down);
			MoveDirection = Down;
		}
		break;
	case 'W':
	case 'w':
		if (MoveDirection == Down)
		{
			return;
		}
		else
		{
			AddPos(Up);
			MoveDirection = Up;
		}
		break;
	case 'D':
	case 'd':
		if (MoveDirection == Left)
		{
			return;
		}
		else
		{
			AddPos(Right);
			MoveDirection = Right;
		}
		break;
	case '1':
		GetCore()->EngineEnd();
		break;
	default:
		break;
	}

	if (nullptr == BodyManager::GetCurBody())
	{
		MsgBoxAssert("������ �ִ� �ٵ� �������� �ʽ��ϴ�.");
		return;
	}

	Body* CurBody = BodyManager::GetCurBody();

	if (CurBody->GetPos() == GetPos())
	{
		CurBody->SetRenderChar('@');
		Link.push_back(CurBody);

		BodyManager::ResetBody();
	}

	int LinkLength = Link.size();

	if (LinkLength > 0)
	{
		int2 Temp1 = Link[0]->GetPos();
		Link[0]->SetPos(PrevHeadPos);

		for (int i = 1; i < LinkLength; i++)
        {
            int2 Temp2 = Link[i]->GetPos();
            Link[i]->SetPos(Temp1);
            Temp1 = Temp2;
        }
	}
}