#pragma once
class Object
{
public:
	// = 0; �� ������ ���� �����Լ�(�Լ� ��ü�� ������ ���� �̸��� ����) ������ �׳� virtual(������ Ŭ���� ���� �ٸ����� ������ ������������) �Լ�
	// virtual �Լ� ������ ����
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render()= 0;
	virtual void Destroy()= 0;

	Object();
	~Object();

};

