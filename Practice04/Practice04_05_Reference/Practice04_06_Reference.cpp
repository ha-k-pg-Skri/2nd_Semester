// Practice04_05_Reference.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
void Init(int& rhp, int& rmp)
{
    rhp = 50;
    rmp = 10;
}

//const 
void Print(const int& rhp, const int& rmp)
{
   // rhp = 50;
    // rmp = 10;
    printf("Hp=%d\n", rhp);
    printf("Mp=%d\n", rmp);
}

int main()
{
    int val = 0;
    int ref = val;

    printf("valのアドレス %x\n", &val);
    printf("refのアドレス %x\n", &ref);

    printf("valに100を代入\n");
    val = 100;
    printf("val= %d\n", val);
    printf("ref= %d\n", ref);

    printf("\n", ref);

    printf("refに10を代入\n");
        ref = 10;
      printf("val =%d\n", val);
      printf("ref =%d\n", ref);

      //参照渡し
      //引数に参照を持つ関数へ変数を渡すこと

      int hp = 0;
      int mp = 0;

      Init(hp, mp);
      printf("HP =%d\n", hp);
      printf("MP =%d\n", mp);

      //参照渡しの注意
      //実態のある変数しか渡せない
   //   Init(50, 10);
  
      return 0;
}

