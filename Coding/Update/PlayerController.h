#include "Object.h"

#pragma once
class PlayerController : public Object
{
public:
	void Start();
	void Update();
	void LateUpdate();
	void Render();
	void Destroy();

	PlayerController();
	~PlayerController();

};

