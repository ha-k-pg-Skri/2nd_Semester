#include"Comon.h"
#include"Unit.h"

#include"Definition.h"




Unit::Unit()
{
	m_stataus._hp = 0;
	m_stataus._str = 0;
	m_stataus._mag = 0;
	m_stataus._tec = 0;
	m_stataus._spd = 0;
	m_stataus._def = 0;
	m_stataus._luc = 0;
	m_stataus._mde = 0;

}
Unit::~Unit()
{







}


void Unit::printStatus()
{

	printf("m_hp =%d\n",m_stataus._hp);
	printf("str =%d\n", m_stataus._str);
	printf("mag =%d\n", m_stataus._mag);
	printf("tec =%d\n", m_stataus._tec);
	printf("spd =%d\n", m_stataus._spd);
	printf("def =%d\n", m_stataus._def);
	printf("luc =%d\n", m_stataus._luc);
	printf("mde =%d\n", m_stataus._mde);

}


