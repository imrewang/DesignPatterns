//叶子节点Leaf
//Market Individual市场部门人员
//声明

#include"component.h"

//Leaf（ResearchIndividual MarketIndividual）叶节点，没有子对象
class MarketIndividual :public Component {
public:
	MarketIndividual(const string& workType);
	virtual void jobs();
protected:
	string m_workType;
};