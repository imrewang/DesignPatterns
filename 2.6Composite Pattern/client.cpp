//用户client

#include"organization.h"
#include"researchindividual.h"
#include"marketindividual.h"

/*
Client：客户端

Component：组合中的对象声明接口，在适当情况下，实现所有类共有接口的默认行为。声明一个接口用于访问和管理Component的子部件。

Leaf：在组合中表示叶节点对象，叶节点没有子节点。

Composite：定义有枝节点行为，用来存储子部件，在Component接口中实现与子部件有关的操作，比如增加Add和删除Remove。

*/



#if __cpp_range_based_for >= 200907L

#define FOREACH(var, container) for (var : container)

#else
template <typename container_type>
class Foreach_container
{
public:

	Foreach_container(const container_type& c) : begin(c.begin()), end(c.end()) {}
	Foreach_container(container_type& c) : begin(c.begin()), end(c.end()) {}

	decltype(container_type().begin()) begin, end;
	bool f = true;
};

#define FOREACH(var, container)                                                \
	for (auto _container_ = Foreach_container<decltype(container)>(container); \
	    _container_.f && _container_.begin != _container_.end;                     \
	    ++_container_.begin, _container_.f = true)                                 \
	                                                                               \
	    for (var = *_container_.begin; _container_.f; _container_.f = false)
#endif

#ifndef foreach
# define foreach FOREACH
#endif



/*
一个大公司由两个部门组成，
分别是研发部门和市场部门，
研发部门又由C++开发、Java开发、测试开发组成，
市场部门由销售员工、服务员工组成
*/




void ergodic(Component* component);

int main() {
	//create research department
	Organization* researchDepartment = new Organization("Research Department");

	//create research department employee
	ResearchIndividual* cplusplusDev = new ResearchIndividual("C++ developer");
	ResearchIndividual* javaDev = new ResearchIndividual("Java developer");
	ResearchIndividual* testDev = new ResearchIndividual("Test developer");

	researchDepartment->add(cplusplusDev);
	researchDepartment->add(javaDev);
	researchDepartment->add(testDev);

	//create market department
	Organization* marketdepartment = new Organization("Market Department");

	//create markte department employee
	MarketIndividual* sales = new MarketIndividual("Sales");
	MarketIndividual* support = new MarketIndividual("Support");

	marketdepartment->add(sales);
	marketdepartment->add(support);

	//create company
	Organization* company = new Organization("FD university");
	company->add(researchDepartment);
	company->add(marketdepartment);

	ergodic(company);

	return 0;
}

void ergodic(Component* component)
{
	if (component == NULL) {
		return;
	}
	component->jobs();
	if (component->getOrganization() != 0) {
		vector<Component*>* pVec = component->getIterator();
		foreach(Component* var, *pVec) {
			ergodic(var);
		}
	}
}
