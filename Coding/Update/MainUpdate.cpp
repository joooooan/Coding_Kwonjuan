#include "MainUpdate.h"
#include "Scene.h"

void MainUpdate::Start()
{
	scene = new Scene;
	scene->Start();
}

void MainUpdate::Update()
{
	scene->Update();
}

void MainUpdate::LateUpdate()
{
	scene->LateUpdate();
}

void MainUpdate::FixedUpdate()
{
	cout << "FixedUpdate" << endl;
}

void MainUpdate::Render()
{
	scene->Render();
}

void MainUpdate::Destroy()
{
	scene->Destroy();
}

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}
