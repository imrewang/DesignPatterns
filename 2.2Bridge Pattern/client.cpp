//用户使用Client
#include"concreteos.h"
#include"redefinecomputer.h"

int main() {
	//具体操作系统
	OS* osLinux = new Linux();
	OS* osWindows = new Windows();
	OS* osMac = new MacOS();

	//具体笔记本电脑
	Computer* dellComputer1 = new DellComputer();
	Computer* dellComputer2 = new DellComputer();
	Computer* appleComputer1 = new AppleComputer();
	Computer* appleComputer2 = new AppleComputer();

	//安装操作系统
	dellComputer1->InstallOS(osLinux);
	dellComputer2->InstallOS(osWindows);
	appleComputer1->InstallOS(osMac);
	appleComputer1->InstallOS(osWindows);

	return 0;

}