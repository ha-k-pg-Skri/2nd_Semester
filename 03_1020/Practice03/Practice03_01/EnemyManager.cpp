#include"EnemyManager.h"
#include"Enemy.h"
#include"Base.h"


//�R���X�g���N�^
EnemyManager::EnemyManager()
{

	m_Enemies.clear();
}

//�f�X�g���N�^
EnemyManager::~EnemyManager()
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		
		delete* itr;
		*itr = nullptr;
	}
	//m_Enemies�ɂ�nullptr��������Base* �̔z�񂪓����Ă���
	m_Enemies.clear();
}


//�G�l�~�[�𐶂ݏo��
class Base* EnemyManager::CreateEnemy(int enemy_type)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϔz��ɋ󂫂�����΂����ɍ��
		
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}
	//�󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//�G�l�~�[���폜����
bool EnemyManager::DestroyEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{

		return false;
	}
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϔz���ptr�Ɠ����A�h���X�������̂�����΍폜
		
		if (*itr == ptr)
		{
			delete *itr;
			*itr = nullptr;

			return true;
		}
	}
	return false;

}
//�G�l�~�[�̏��������s����
void EnemyManager::Exec()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		
		
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Exec();
		}
	}
}
//�G�l�~�[�̕`������s����
void EnemyManager::Draw()
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{

	
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}
//�w�肵����`��Enemy�̓����蔻����Ƃ�
class Base* EnemyManager::CheckHit(int x, int y, int width, int hieght)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{

		if (*itr == nullptr)
		{
			Base* ptr = *itr;
			if (ptr->CheckHit(x, y, width, hieght))
			{

				
				return ptr;
			}
		}
	}
	//for���𔲂���ƁA��������������Ȃ����ƂɂȂ�̂�nullptr��Ԃ�
	return nullptr;
}
