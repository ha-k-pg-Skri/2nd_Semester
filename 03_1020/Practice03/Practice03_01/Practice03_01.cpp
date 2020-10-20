#include<stdlib.h>
#include<stdio.h>
#include"Player.h"
#include"Enemy.h"
#include"EnemyManager.h"

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
	//Base* enemy = new Eneamy();
	//Base* array[] =
	//{
	//	new Player(),
	//	new Enemy()

	//};
	//array[1]->SetHp(100);
	//for (int i = 0; i < 2; i++)
	//{
	//	if (array[i] != nullptr)
	//	{

	//		array[i]->Exec();
	//		PrintHp(array[i]);
	//		if (array[i]->CheckHit(10, 10, 20, 30) == false)
	//		{
	//			printf("当たっていません\n");
	//		}

	//	}


	//}

	///*delete player;
	//delete enemy;
	////実体の破棄

	//for (int i = 0; i < 2; i++)
	//{

	//	delete array[i];
	//	array[i] = nullptr;

	//}


	//Base base;
	//Base* pBase = new Base();*/

	//EnemyManagerを使ったEnemyクラスの管理の例
	EnemyManager* enemymMng = new EnemyManager();
	Base* pEnemy = nullptr;

	//ステージ開始時点にまとめて初期化
	enemymMng->CreateEnemy(0);
	enemymMng->CreateEnemy(1);
	pEnemy=enemymMng->CreateEnemy(2);
	enemymMng->CreateEnemy(3);
	enemymMng->CreateEnemy(4);
	enemymMng->CreateEnemy(4);
	enemymMng->CreateEnemy(4);

	//作成したエネミーに各処理を行わせる
	enemymMng->Exec();
	enemymMng->Draw();

	//指定したエネミーを削除
	enemymMng->DestroyEnemy(pEnemy);

	//指定座標と接触しているエネミーを取得
	pEnemy = enemymMng->CheckHit(10, 10, 20, 30);



	system("pause");
	return 0;
}

