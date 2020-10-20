#ifndef BASE_H
#define BASE_H


class Base
{
public:
	Base();
	virtual ~Base();
public:

	//引数の矩形情報と、自分が当たっているかを判定
virtual bool CheckHit(int x,int y,int width,int hegight);


public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

	float SetSize(int Width,int Height);
	float GetWidth();
	float GetHeight();


private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	int m_Width;   //当たり判定用幅
	int m_Height;// 当たり判定用高さ

};

#endif
