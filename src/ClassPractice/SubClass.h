#pragma once
#include "MyClass.h"

class SubClass : public MyClass
{
public:
	SubClass()
	{
		a = 10;
		b = 10;
	}

	// error: ����Ǵ� �ڵ�� ���� �Լ� ��
	// a = 10; 
};

