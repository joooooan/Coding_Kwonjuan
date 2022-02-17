#pragma once
class Object
{
public:
	// = 0; 을 넣으면 순수 가상함수(함수 자체의 내용이 없고 이름만 존재) 없으면 그냥 virtual(내용은 클래스 마다 다르지만 내용이 있을수도있음) 함수
	// virtual 함수 재정의 차이
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void LateUpdate() = 0;
	virtual void Render()= 0;
	virtual void Destroy()= 0;

	Object();
	~Object();

};

