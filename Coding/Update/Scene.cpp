#include "Scene.h"
#include "PlayerController.h"


void Scene::Start()
{
	player = new PlayerController;

	player->Start();
}

void Scene::Update()
{
	player->Update();
}

void Scene::LateUpdate()
{
	player->LateUpdate();
}

void Scene::Render()
{
	player->Render();
}

void Scene::Destroy()
{
	player->Destroy();
}

Scene::Scene()
{
}

Scene::~Scene()
{
}
