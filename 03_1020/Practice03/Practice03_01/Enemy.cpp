#include"Enemy.h"
#include<stdio.h>



Enemy::Enemy()
{
	
	//エネミー専用変数
	m_Routine = 0;

}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{


}

void Enemy::Draw()
{


}


bool Enemy::CheckHit(int x, int y, int width, int hegight)
{
	printf("EnemyクラスのCheckHit()\n");

	//オーバーライド元の関数を使うには明確に宣言して呼び出す
	Base::CheckHit(x, y, width, hegight);

	return false;

}