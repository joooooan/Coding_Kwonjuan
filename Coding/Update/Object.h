#pragma once
#include "Headers.h"

class Object
{
public:
	// = 0; �� ������ ���� �����Լ�(�Լ� ��ü�� ������ ���� �̸��� ����) ������ �׳� virtual(������ Ŭ���� ���� �ٸ����� ������ ������������) �Լ�
	// virtual �Լ� ������ ����

	// ������ ������ ���Ǵ� ����.
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render()= 0;
	virtual void Destroy()= 0;

	Object();
	virtual ~Object();

};

