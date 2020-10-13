
#include <stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>// c++で拡張された入力用ヘッダー

int main()
{
    char word = 'a';  //1文字
    const char* cstr = "Hello world!"; //文字列
    char name[] = "sakrai kouta";  //const char ポインタ型

    printf("%c\n", word);
    printf("%s\n", cstr);
    printf("%s\n", name);


    //std::string str = "文字列";
    //std::string str = "";
    //std::string str = "ABC";
  
    //std::string str ("ABC");
    //std::string str = "文字列";
   std::string str(3,'A');


// printf("str =%s\n", str.c  _str());


    std::cout << str << std::endl;
    std::cout << "str size =" << str.size()<<std::endl;
   
    str += "BBC";
    str.push_back('D');
    str.append("EE");
    str.insert(1, "FG");
    std::cout << str << std::endl;
   
    //文字も検索.find()
    str = "ABC ABC";
    int index = str.find('C');
     index = str.find("BC");
     index = str.find("BC",2);
     index = str.find("Z");  //－１だが、std::string::npos;を使って判定する
     //.rfind()後ろから検索
     //.find_first_of()　指定文字を先頭から検索
     //.find_last_of()  指定文字ではない文字を最後から検索
     //.find_fiarst_not_of()指定文字ではない文字を、最初から検索
     //.find_last_not_of()指定文字ではない文字を、最初から検索

     //文字の置き換え.replace()
     std::string from = "BC";
     std::string to = "X";

     str.replace(str.find(from), from.size(),to);
     std::cout << str << std::endl;
    

     //文字の削除.clear()

     str.clear();
     std::cout << str << std::endl;


    
    system("pause");
    return 0;
}
