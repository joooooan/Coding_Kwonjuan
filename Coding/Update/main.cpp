#include <iostream>
#include "MainUpdate.h"

using namespace std;

int main()
{
	MainUpdate Main;
	Main.Start();

	while (true)
	{
		Main.Update();
		Main.Render();
	}

	Main.Destroy(); //������� ������ �÷��Ϳ� ���µ� ������� �־���

	return 0;
}