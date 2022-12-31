//�û�client

#include"organization.h"
#include"researchindividual.h"
#include"marketindividual.h"

/*
Client���ͻ���

Component������еĶ��������ӿڣ����ʵ�����£�ʵ�������๲�нӿڵ�Ĭ����Ϊ������һ���ӿ����ڷ��ʺ͹���Component���Ӳ�����

Leaf��������б�ʾҶ�ڵ����Ҷ�ڵ�û���ӽڵ㡣

Composite��������֦�ڵ���Ϊ�������洢�Ӳ�������Component�ӿ���ʵ�����Ӳ����йصĲ�������������Add��ɾ��Remove��

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
һ����˾������������ɣ�
�ֱ����з����ź��г����ţ�
�з���������C++������Java���������Կ�����ɣ�
�г�����������Ա��������Ա�����
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
