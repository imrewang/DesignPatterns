#ifndef PHOTOINFO_H
#define PHOTOINFO_H

#include<string>
#include<iostream>


/*�ڴ��ĵ�ʱ��������ͼ�ζ��󣬶��Ǵ�ͼ�ζ���Ĵ����������ʵ��ͼ�Ρ�����������Ҫ��ͼ��ʱ�����ɴ�����򿪡�*/

using namespace std;

//�ӿڻ��� Subject
//Subject��PhotoInfo�� �ӿڻ���//������realsubject��proxy�Ĺ��ýӿ�
//this is a class include photo base model information
class PhotoInfo {
public:
	PhotoInfo(){}

	//virtual ~PhotoInfo(){}

	virtual void photoinfo_GetRealPhoto() {};
protected:
	string m_Photo;
};


//�������ʵ�����(RealSubject)
// RealSubject��BigPhoto������Proxy�������ʵ�����
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

//����(Proxy)
// Proxy��BigPhotoProxy�� ͨ���ö�����ʵ�ֶԱ��������ķ��ʻ����
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
		cout<<"Proxy:����������Ҫ��ͼ��ʱ�����ɴ�����򿪡�"<<endl;
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
