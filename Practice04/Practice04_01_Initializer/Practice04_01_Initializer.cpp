
#include <iostream>

class CharaBase
{
public:
    CharaBase();
    ~CharaBase();

    void PrintParam();

private:
       
    int Hp;
    int Mp;

    const int HP_MAX;

};

//コンストラクタで、メンバイニシャライザによる初期化のやり方
//　クラス名：：コンストラクタ（引数）　:　メンバ変数（初期値）、メンバ変数（初期値）

CharaBase::CharaBase()
    : Hp(100)
    , Mp(10)
    ,HP_MAX(999)  //constメンバ変数もここでなら初期化できる
   
{
  
}
CharaBase::~CharaBase()
{
   // HP_MAX = 999;  //コンストラクタ内ではconst型のメンバ変数を初期化できない
}

void  CharaBase::PrintParam()
{
    printf("Hp =%d\n", Hp);
    printf("Mp =%d\n", Mp);
    printf("\n");
    printf("HP_MAXp =%d\n", HP_MAX);
}

class Player :public CharaBase
{
public:
    Player();

private:
    int Money;
};

Player::Player()

:Money(50)
,CharaBase()
{

}

int main()
{
    int value(10);
    float f_value(10.0f);

    CharaBase ch;
    ch.PrintParam();
}
