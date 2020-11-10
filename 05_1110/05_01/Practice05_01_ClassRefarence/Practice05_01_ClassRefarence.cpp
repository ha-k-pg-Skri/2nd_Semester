// Practice05_01_ClassRefarence.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include"CharacterBass.h"
#include <iostream>

void PrintParam(const CharacterBass& character);
//const参照引数をもつパラメーター
int main()
{
	CharacterBass testChar;
	PrintParam(testChar);

	return 0;
}

void PrintParam(const CharacterBass& character)
{
	printf("Character Parameter List\n");
	printf("------------------------\n");
	printf("Hp =%3d\n",character.GetHp());
	printf("Mp =%3d\n",character.GetMp());
	printf("Str =%3d\n",character.GetStr());
	printf("Vit =%3d\n",character.GetVit());
	printf("Int =%3d\n",character.GetInt());
}