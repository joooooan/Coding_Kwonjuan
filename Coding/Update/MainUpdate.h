#pragma once
#include "Headers.h"


class Scene;
class MainUpdate
{
private:
	Scene* scene;

public:
	void Start();
	void Update();
	void LateUpdate();
	void FixedUpdate();
	void Render();
	void Destroy();

	MainUpdate();
	~MainUpdate();

};

