#ifndef ENEMY_H
#define ENEMY_H

#include"Base.h"

class Enemy :public Base
{
public:
	Enemy();
	~Enemy();
public:
	void Exec();
	void Draw();
	virtual bool CheckHit(int x, int y, int width, int hegight);




	int m_Routine; //行動ルーチン管理変数
};
#endif 
