
#ifndef UNIT_H
#define UNIT_H





class Unit
{

public:

	//コンストラクタ
	Unit();

	//デストラクタ
	~Unit();


void printStatus();

private:
		int m_hp;
		int m_str;
		int m_mag;
		int m_tec;
		int m_spd;
		int m_def;
		int m_luc;
		int m_mde;
	
	
};


#endif 

