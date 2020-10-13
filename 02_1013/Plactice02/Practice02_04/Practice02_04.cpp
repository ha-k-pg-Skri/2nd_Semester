#include<stdlib.h>
#include<stdio.h>
#include"Player.h"
#include"Enemy.h"

int main()
{

	Player player;

	Player.SetMoveSpeed();
	Enemy enemy;
	enemy.SetHp(100);

	printf("----------------\n");
	printf("PRACTICE02_04\n");
	printf("----------------\n");

	printf("Player Status\n");
	printf("hp =%d\n", player.GetHp());
	printf("posX =%0.2f\n", player.GetPosX());
	printf("posY =%0.2f\n", player.GetPosY());
	printf("MoveSpeed =%0.2f\n", player.GetMoveSpeed());

	printf("\n");




	system("pause");
	return 0;
}

