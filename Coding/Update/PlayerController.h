#include "Object.h"

#pragma once
class PlayerController : public Object
{
public:
	virtual void Start();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void Destroy();

	PlayerController();
	virtual ~PlayerController();

};

