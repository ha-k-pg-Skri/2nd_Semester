#ifndef BASE_H
#define BASE_H


class Base
{
public:
	Base();
    ~Base();
public:

public:
	//�p����ŁA���ꂼ�ꏈ���̈Ⴄ���Ƃ��킩���Ă���֐���
	//�������z�֐��Ƃ��Ċ��N���X�ɐ錾
	virtual void Exec() = 0;
	virtual void Draw() = 0;

	//�����̋�`���ƁA�������������Ă��邩�𔻒�
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

	int m_Width;   //�����蔻��p��
	int m_Height;// �����蔻��p����

};

#endif
