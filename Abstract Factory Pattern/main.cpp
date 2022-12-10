//�ͻ���
#include"abstractfactory.h"

int main() {
	AbstractFactory* factory111 = new BM111Factory();
	AbstractFactory* factory222 = new BM222Factory();

	//����BM111ר����Engine��GearBox
	Engine* engineA = factory111->CreatEngine();
	GearBox* gearboxA = factory111->CreatGearBox();

	//����BM222ר����Engine��GearBox
	Engine* engineB = factory222->CreatEngine();
	GearBox* gearboxB = factory222->CreatGearBox();

	return 0;
}