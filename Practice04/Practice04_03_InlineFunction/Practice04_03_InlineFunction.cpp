
#include <iostream>
#include<Windows.h>
#include<stdio.h>
//インライン関数の書き方
/*
inLine  戻り値の型　関数名（引数）
　｛
 　　　処理内容
 ｝

*/

inline int AddSum(int a, int b)
{
    return (a + b);
}

//クラス内に関数を定義することもできる

class Test
{
public:
    //関数をの宣言部に定義も書いてしまうと
    //自動的にinline関数として扱われる

    int AddSum(int a, int b)
    {

        return (a + b);
    }

};
inline unsigned int InlinePow(int x1, int x2)
{

    return (x1 * x2);
}
unsigned int Pow(int x1, int x2)
{
    return (x1 * x2);

}
/*
インライン関数の注意点
関数の規模が大きいと判断されたものは、たとえinlineとついても通常の関数呼び出しだと思はれる

そのため、inline関数の処理は小規模にしなければならない＞。


*/;
int main()
{
    //コンパイル時、　a = (a+b) >a =(1 +3)に展開される
    int a = AddSum(1, 3);


    LARGE_INTEGER f;
    if (!QueryPerformanceFrequency(&f))
    {
        return 0;
    }

    LARGE_INTEGER s, e;
    {
        QueryPerformanceCounter(&s);
        unsigned int pow = 0;
        for (int i = 0; i < 10000; i++)
        {

            for (int j = 0; j < 10000; j++)
            {

                pow = Pow(i, j);
            }
        }
        printf("pow = %d\n", pow);
        QueryPerformanceCounter(&e);
        double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
        printf("inline time =%f sec\n", t);
    }
    {


        QueryPerformanceCounter(&s);
        unsigned int pow = 0;
        for (int i = 0; i < 10000; i++)
        {

            for (int j = 0; j < 10000; j++)
            {

                pow = Pow(i, j);
            }
        }
        printf("pow = %d\n", pow);
        QueryPerformanceCounter(&e);
        double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
        printf("time =%f sec\n", t);





    }
}
