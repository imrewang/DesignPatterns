//Ҷ�ӽڵ�Leaf
//Research Individual�з���Ա
//����

#include"component.h"

//Leaf��ResearchIndividual MarketIndividual��Ҷ�ڵ㣬û���Ӷ���
class ResearchIndividual :public Component {
public:
	ResearchIndividual(const string& workType);
	virtual void jobs();
protected:
	string m_workType;
};