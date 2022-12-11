#include"builder.h"

int main() {
	//client�û�
	Director* car_director = new Director();
	Car* bm = car_director->construct_car(new BMBuilder());
	Car* bz = car_director->construct_car(new BZBuilder());

	delete bm;
	delete bz;
	delete car_director;
}