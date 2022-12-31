//叶子节点Leaf
//Market Individual市场部门人员
//实现

#include "marketindividual.h"
MarketIndividual::MarketIndividual(const string& workType)
{
	m_workType = workType;
}

void MarketIndividual::jobs()
{
	cout << "MarketIndividual::jobs\tThis is : " << m_workType << " from market department" << endl;
}
