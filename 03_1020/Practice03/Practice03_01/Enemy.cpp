#include"Enemy.h"
#include<stdio.h>



Enemy::Enemy()
{
	
	//エネミー専用変数
	m_Routine = 0;
	printf("Enemyのコンストラクタ\n");

}

Enemy::~Enemy()
{
	printf("Enemyのデストラクタ\n");
}

void Enemy::Exec()
{

	printf("EnemyのExcc\n");
}

void Enemy::Draw()
{
	printf("EnemyのDraw\n");

}


bool Enemy::CheckHit(int x, int y, int width, int hegight)
{
	printf("EnemyクラスのCheckHit()\n");

	//オーバーライド元の関数を使うには明確に宣言して呼び出す
	Base::CheckHit(x, y, width, hegight);

	return false;

}