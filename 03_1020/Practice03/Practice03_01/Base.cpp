#include"Base.h"
#include<stdio.h>

Base::Base()
{
	m_Hp = 1;
	m_PosX = 0.0f;
	m_PosY = 0.0f;
	m_MoveSpeed = 1.0f;
}

Base::~Base()
{

}

bool Base::CheckHit(int x, int y, int width, int hegight)
{

	printf("BaseƒNƒ‰ƒX‚ÌCheckHit()\n");

	return false;

}

void Base::SetHp(int hp)
{
	m_Hp = hp;
}

void Base::SetPos(float x, float y)
{
	m_PosX = x;
	m_PosY = y;

}

void Base::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Base::GetHp()
{
	return m_Hp;

}

float Base::GetMoveSpeed()
{
	return m_MoveSpeed;

}

float Base::GetPosX()
{
	return m_PosX;
}

float Base::GetPosY()
{
	return m_PosY;

}

float Base::SetSize(int Width, int Height)
{
	Width = m_Width;
	Height = m_Height;

	return Width;
	return Height;
}

float Base::GetWidth()
{
	return m_Width;

}

float Base::GetHeight()
{
	return m_Height;
}