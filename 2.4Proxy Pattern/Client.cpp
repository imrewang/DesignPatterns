//�û�(Client)

#include"photoinfo.h"

//Client �û�
int main() {
	PhotoInfo* photo = new BigPhotoProxy("#Planet Photo#");
	photo->photoinfo_GetRealPhoto();
	//����ֱ�ӵ��ñ������ʵ�����(RealSubject)BigPhoto�����������麯��BigPhotoProxyû�����������û�з�Ӧ

	return 0;
}