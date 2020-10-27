#include"EnemyManager.h"
#include"Enemy.h"
#include"Base.h"


//コンストラクタ
EnemyManager::EnemyManager()
{

	m_Enemies.clear();
}

//デストラクタ
EnemyManager::~EnemyManager()
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		
		delete* itr;
		*itr = nullptr;
	}
	//m_Enemiesにはnullptrが入ったBase* の配列が入っている
	m_Enemies.clear();
}


//エネミーを生み出す
class Base* EnemyManager::CreateEnemy(int enemy_type)
{

	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変配列に空きがあればそこに作る
		
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}
	//空きがないので、新規に作ってpush_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//エネミーを削除する
bool EnemyManager::DestroyEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{

		return false;
	}
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//可変配列にptrと同じアドレスを持つものがあれば削除
		
		if (*itr == ptr)
		{
			delete *itr;
			*itr = nullptr;

			return true;
		}
	}
	return false;

}
//エネミーの処理を実行する
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
//エネミーの描画を実行する
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
//指定した矩形とEnemyの当たり判定をとる
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
	//for文を抜けると、当たったやつがいないことになるのでnullptrを返す
	return nullptr;
}
