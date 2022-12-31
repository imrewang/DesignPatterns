//叶子节点Leaf
//Research Individual研发人员
//声明

#include"component.h"

//Leaf（ResearchIndividual MarketIndividual）叶节点，没有子对象
class ResearchIndividual :public Component {
public:
	ResearchIndividual(const string& workType);
	virtual void jobs();
protected:
	string m_workType;
};