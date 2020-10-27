
#include <iostream>

class A
{
public:
    // explicit 演算子の書き方
   explicit A(int val)
    {
        std::cout << val << std::endl;
    }

};

class B
{

public:
   explicit B(const A& ref)
    {
       
    }
};
int main()
{
    //引数を１つだけとるコンストラクタは、
    //暗黙の型変換が行われる可能性がある
   explicit B(1000);  //BのクラスのコンストラクタはAのクラスの変数をうけとるのでは？
              //暗黙的にB（A（1000））と解釈しちゃってる

    A test = 100; //Aのクラス変数にデータ型を代入？
          //暗黙的にA　test =A(100)と解釈しちゃっている
          //コピーコンストラクタが呼び出されている

    A(35);   //Aのクラスのコンストラクタ（問題的）
             //問題なし
  
}
