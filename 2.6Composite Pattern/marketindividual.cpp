//Ҷ�ӽڵ�Leaf
//Market Individual�г�������Ա
//ʵ��

#include "marketindividual.h"
MarketIndividual::MarketIndividual(const string& workType)
{
	m_workType = workType;
}

void MarketIndividual::jobs()
{
	cout << "MarketIndividual::jobs\tThis is : " << m_workType << " from market department" << endl;
}
