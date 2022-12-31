#ifndef PHOTOINFO_H
#define PHOTOINFO_H

#include<string>
#include<iostream>


/*在打开文档时，并不打开图形对象，而是打开图形对象的代理以替代真实的图形。待到真正需要打开图形时，仍由代理负责打开。*/

using namespace std;

//接口基类 Subject
//Subject（PhotoInfo） 接口基类//定义了realsubject和proxy的共用接口
//this is a class include photo base model information
class PhotoInfo {
public:
	PhotoInfo(){}

	//virtual ~PhotoInfo(){}

	virtual void photoinfo_GetRealPhoto() {};
protected:
	string m_Photo;
};


//被代理的实体对象(RealSubject)
// RealSubject（BigPhoto）定义Proxy所代表的实体对象
//this is a real big photo with "m_Photo"
class BigPhoto :public PhotoInfo {
public:
	BigPhoto(string photo) {
		m_Photo = photo;
	}

	~BigPhoto(){}

	void photoinfo_GetRealPhoto() {
		cout << "Get real " << m_Photo << " for view !" << endl;
	}
};

//代理(Proxy)
// Proxy（BigPhotoProxy） 通过该对象来实现对被代理对象的访问或控制
//this is BigPhoto proxy  
class BigPhotoProxy :public PhotoInfo {
public:
	BigPhotoProxy(string photo) :m_pBigPhoto(NULL){
		//Before askreal photo for view, see GetRealPhoto get some base info
		m_Photo = photo;
		cout << "This is a proxy of " << m_Photo << endl;
	}

	~BigPhotoProxy(){}

	void photoinfo_GetRealPhoto() {
		cout<<"Proxy:待到真正需要打开图形时，仍由代理负责打开。"<<endl;
		//ask real photo to view
		if (m_pBigPhoto == NULL) {
			m_pBigPhoto = new BigPhoto(m_Photo);
		}
		m_pBigPhoto->photoinfo_GetRealPhoto();
	}

private:
	BigPhoto* m_pBigPhoto;
};

#endif // !PHOTOINFO_H
