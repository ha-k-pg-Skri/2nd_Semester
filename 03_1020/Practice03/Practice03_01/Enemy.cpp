#include"Enemy.h"
#include<stdio.h>



Enemy::Enemy()
{
	
	//�G�l�~�[��p�ϐ�
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
	printf("Enemy�N���X��CheckHit()\n");

	//�I�[�o�[���C�h���̊֐����g���ɂ͖��m�ɐ錾���ČĂяo��
	Base::CheckHit(x, y, width, hegight);

	return false;

}