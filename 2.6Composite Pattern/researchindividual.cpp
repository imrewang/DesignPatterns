//Ҷ�ӽڵ�Leaf
//Research Individual�з���Ա
//ʵ��


#include "researchindividual.h"
ResearchIndividual::ResearchIndividual(const string& workType)
{
	m_workType = workType;
}

void ResearchIndividual::jobs()
{
	cout << "ResearchIndividual::jobsThis is : " << m_workType << " from research department" << endl;
}
