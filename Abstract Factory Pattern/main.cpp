//客户端
#include"abstractfactory.h"

int main() {
	AbstractFactory* factory111 = new BM111Factory();
	AbstractFactory* factory222 = new BM222Factory();

	//创建BM111专属的Engine和GearBox
	Engine* engineA = factory111->CreatEngine();
	GearBox* gearboxA = factory111->CreatGearBox();

	//创建BM222专属的Engine和GearBox
	Engine* engineB = factory222->CreatEngine();
	GearBox* gearboxB = factory222->CreatGearBox();

	return 0;
}