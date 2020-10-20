#ifndef ENEMY_H
#define ENEMY_H

#include"Base.h"

class Enemy :public Base
{
public:
	Enemy();
	 virtual ~Enemy();
public:
	void Exec();
	void Draw();
	virtual bool CheckHit(int x, int y, int width, int hegight);




	int m_Routine; //s“®ƒ‹[ƒ`ƒ“ŠÇ—•Ï”
};
#endif 
