#include "MainUpdate.h"

using namespace std;

int main()
{
	MainUpdate Main;
	Main.Start();

	ULONGLONG Time = GetTickCount64();
	float DeltaTime = 0;
	float StartTime = 0;
	float EndTime = 0;


	while (true)
	{

		StartTime = float(GetTickCount64() % 1000) / 1000;
		if (Time + DeltaTime < GetTickCount64())
		{
			Time = GetTickCount64();
			system("cls");

			Main.FixedUpdate();

			Sleep(DeltaTime * 5);
		}
		else
		{

			Main.Update();
			Main.LateUpdate();
			Main.Render();
		}
		EndTime = float(GetTickCount64() % 1000) / 1000;
		DeltaTime = EndTime - StartTime;

		

	}

	Main.Destroy(); //본래라면 쓰레기 컬렉터에 들어가는데 대신으로 넣어줌

	return 0;
}