﻿#include<stdlib.h>
#include<stdio.h>
#include"Player.h"
#include"Enemy.h"

int main()
{


	Base* player = new Plaeyer();
	Base* enemy = new Eneamy();
	Base* array[] =
	{
		new Player(),
		new Enemy()

	};

	
	player->SetMoveSpeed(5.0f);	
	enemy->SetHp(100);


	//printf("----------------\n");
	//printf("PRACTICE02_04\n");
	//printf("----------------\n");

	//printf("Player Status\n");
	//printf("hp =%d\n", player.GetHp());
	//printf("posX =%0.2f\n", player.GetPosX());
	//printf("posY =%0.2f\n", player.GetPosY());
	//printf("MoveSpeed =%0.2f\n", player.GetMoveSpeed());

	//printf("\n");

	//printf("----------------\n");
	//printf("PRACTICE02_04\n");
	//printf("----------------\n");

	//printf("Enemy Status\n");
	//printf("hp =%d\n", enemy.GetHp());
	//printf("posX =%0.2f\n", enemy.GetPosX());
	//printf("posY =%0.2f\n", enemy.GetPosY());
	//printf("MoveSpeed =%0.2f\n", enemy.GetMoveSpeed());

	//printf("\n");



	if (player->CheckHit(10, 10, 20, 30) == false)
	{
		printf("当たっていません\n");

	}
	if (enemy->CheckHit(10, 10, 20, 30) == false)
	{
		printf("当たっていません\n");

	}

	delete Player();
	delete Enemy();


	system("pause");
	return 0;
}

