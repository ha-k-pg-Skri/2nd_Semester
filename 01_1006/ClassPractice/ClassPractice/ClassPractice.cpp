#include <stdlib.h>
#include <stdio.h>


class Fighter

{

public:

	//コンストラクタ
	Fighter();
	
	//デストラクタ
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;

	



};

Fighter::Fighter()
{
	 m_hp =0;
	 m_str =0;
	 m_mag=0;
	 m_tec=0;
	 m_spd=0;
	 m_def=0;
	 m_luc=0;
	 m_mde=0;

}
Fighter::~Fighter()
{







}


int main()
{
	Fighter beast;

	printf("hp =%d\n",beast.m_hp);
	printf("str =%d\n",beast.m_str);
	printf("mag =%d\n",beast.m_mag);
	printf("tec =%d\n",beast.m_tec);
	printf("spd =%d\n",beast.m_spd);
	printf("def =%d\n",beast.m_def);
	printf("luc =%d\n",beast.m_luc);
	printf("mde =%d\n",beast.m_mde);

	system("pause");
	return 0;
}