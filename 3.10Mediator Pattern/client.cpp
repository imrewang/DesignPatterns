#include"concreteobject.h"
#include"concretemediator.h"


int main() {
	Mediator* mediator = new ConcretrMediator2ndCarSalesShop();
	Person* bmSeller = new ConcreteBMSellor();
	Person* bzSeller = new ConcreteBZSellor();
	Person* bmCustomer = new ConcreteBMCustomer();
	Person* bzCustomer = new ConcreteBZCustomer();

	bmSeller->SetMediator(mediator);
	bzSeller->SetMediator(mediator);
	bmCustomer->SetMediator(mediator);
	bzCustomer->SetMediator(mediator);

	bmSeller->SendMsg("I want to sell my BMmmm");
	bzSeller->SendMsg("I want to buy BZzzz");
	
	delete mediator;
	delete bmSeller;
	delete bzSeller;
	delete bmCustomer;
	delete bzCustomer;
	return 0;

}