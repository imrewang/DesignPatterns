//Ҷ�ӽڵ�Leaf
//Market Individual�г�������Ա
//����

#include"component.h"

//Leaf��ResearchIndividual MarketIndividual��Ҷ�ڵ㣬û���Ӷ���
class MarketIndividual :public Component {
public:
	MarketIndividual(const string& workType);
	virtual void jobs();
protected:
	string m_workType;
};