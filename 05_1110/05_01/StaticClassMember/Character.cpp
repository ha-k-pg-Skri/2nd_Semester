#include "Character.h"
#include<iostream>
int Character::m_CharacterNum = 0;

Character::Character()
{
	m_CharacterNum++;
}

Character::~Character()
{
	m_CharacterNum--;
}

//static�ȃ����o�֐��̍����i��`�j
//�ʏ�̃����o�֐��Ɠ���(static�͂��Ȃ��Ă��悢�j
void Character::Print()
{
	std::cout << m_CharacterNum << std::endl;

}