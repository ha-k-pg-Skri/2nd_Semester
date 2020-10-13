#ifndef PLAYER_H
#define PLAYER_H

#include"Base.h" //基底クラスのヘッダー(クラスの設計情報をinclude)

//継承その２ クラスの宣言部分に継承していることを表すコードを描く
class Player :public Base
{public:
		Player();
		~Player();
public:
	void Exec();
	void Draw();
};








#endif