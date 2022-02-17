#include "Scene.h"


void Scene::Start()
{
	auto Player = new PlayerController;
	Player->Start();
}

void Scene::Update()
{
}

void Scene::LateUpdate()
{
}

void Scene::Render()
{
}

void Scene::Destroy()
{
}

Scene::Scene()
{
}

Scene::~Scene()
{
}
