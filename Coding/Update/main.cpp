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

	Main.Destroy(); //본래라면 쓰레기 컬렉터에 들어가는데 대신으로 넣어줌

	return 0;
}