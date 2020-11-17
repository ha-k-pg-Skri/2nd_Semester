#include"Num.h"
#include<iostream>


//staticなメンバ変数はあらかじめ、以下のような実体化させておく
//型名　クラス名：：変数名（＝　初期値）
//実体はcpp側に書く
int Num::m_Num = 0; 

Num::Num(int num)
//staticなメンバ変数はイニシャライザを使って初期化することができない

//:m_Num(num)

{   //コンパイル時のエラーは出ない
	//実体が宣言されていないとリンクエラーが出てしまう

	m_Num = num;
  
}

void Num::Print()
{

	std::cout << m_Num << std::endl;

}