#include"Num.h"
#include<iostream>


//static�ȃ����o�ϐ��͂��炩���߁A�ȉ��̂悤�Ȏ��̉������Ă���
//�^���@�N���X���F�F�ϐ����i���@�����l�j
//���̂�cpp���ɏ���
int Num::m_Num = 0; 

Num::Num(int num)
//static�ȃ����o�ϐ��̓C�j�V�����C�U���g���ď��������邱�Ƃ��ł��Ȃ�

//:m_Num(num)

{   //�R���p�C�����̃G���[�͏o�Ȃ�
	//���̂��錾����Ă��Ȃ��ƃ����N�G���[���o�Ă��܂�

	m_Num = num;
  
}

void Num::Print()
{

	std::cout << m_Num << std::endl;

}