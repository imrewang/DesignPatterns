//叶子节点Leaf
//Research Individual研发人员
//实现


#include "researchindividual.h"
ResearchIndividual::ResearchIndividual(const string& workType)
{
	m_workType = workType;
}

void ResearchIndividual::jobs()
{
	cout << "ResearchIndividual::jobsThis is : " << m_workType << " from research department" << endl;
}
