#include<stdlib.h>
#include<stdio.h>
#include"Player.h"
#include"Enemy.h"


void PrintHp(Base* target)
{
	if (target == nullptr)
	{
		return;
	}
	printf("hp=%d\n", target->GetHp());
}

int main()
{


	/*Base* player = new Plaeyer();
	Base* enemy = new Eneamy();*/
	Base* array[] =
	{
		new Player(),
		new Enemy()

	};
	array[1]->SetHp(100);
	for (int i = 0; i < 2; i++)
	{
		if (array[i] != nullptr)
		{

			array[i]->Exec();
			PrintHp(array[i]);
			if (array[i]->CheckHit(10, 10, 20, 30) == false)
			{
				printf("当たっていません\n");
			}

		}


	}

	/*delete player;
	delete enemy;*/
	//実体の破棄

	for (int i = 0; i < 2; i++)
	{

		delete array[i];
		array[i] = nullptr;

	}


	Base base;
	Base* pBase = new Base();

	system("pause");
	return 0;
}

