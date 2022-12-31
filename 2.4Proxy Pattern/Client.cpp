//用户(Client)

#include"photoinfo.h"

//Client 用户
int main() {
	PhotoInfo* photo = new BigPhotoProxy("#Planet Photo#");
	photo->photoinfo_GetRealPhoto();
	//不能直接调用被代理的实体对象(RealSubject)BigPhoto这样若父是虚函数BigPhotoProxy没有这个函数会没有反应

	return 0;
}