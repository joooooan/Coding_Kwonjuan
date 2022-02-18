#pragma once
#include "Object.h"
#include "PlayerController.h"

class PlayerController;
class Scene : public Object
{
private:
	PlayerController* player;

public:
	void Start();
	void Update();
	void LateUpdate();
	void Render();
	void Destroy();

	Scene();
	~Scene();

};

