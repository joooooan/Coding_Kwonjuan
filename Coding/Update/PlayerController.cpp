#include "PlayerController.h"
#include <iostream>

using namespace std;

void PlayerController::Start()
{
	cout << "PlayerController : Start " << endl;
}

void PlayerController::Update()
{
	cout << "PlayerController : Update " << endl;

}

void PlayerController::LateUpdate()
{
	cout << "PlayerController : LateUpdate " << endl;

}

void PlayerController::Render()
{
	cout << "PlayerController : Render " << endl;

}

void PlayerController::Destroy()
{
	cout << "PlayerController : Destroy " << endl;

}

PlayerController::PlayerController()
{
}

PlayerController::~PlayerController()
{
}
