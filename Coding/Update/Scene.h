#pragma once
#include "Object.h"
#include "PlayerController.h"

class Scene : public Object
{
public:
	void Start();
	void Update();
	void LateUpdate();
	void Render();
	void Destroy();

	Scene();
	~Scene();

};

