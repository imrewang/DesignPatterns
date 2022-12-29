//�û�ʹ��Client
#include"concreteos.h"
#include"redefinecomputer.h"

int main() {
	//�������ϵͳ
	OS* osLinux = new Linux();
	OS* osWindows = new Windows();
	OS* osMac = new MacOS();

	//����ʼǱ�����
	Computer* dellComputer1 = new DellComputer();
	Computer* dellComputer2 = new DellComputer();
	Computer* appleComputer1 = new AppleComputer();
	Computer* appleComputer2 = new AppleComputer();

	//��װ����ϵͳ
	dellComputer1->InstallOS(osLinux);
	dellComputer2->InstallOS(osWindows);
	appleComputer1->InstallOS(osMac);
	appleComputer1->InstallOS(osWindows);

	return 0;

}