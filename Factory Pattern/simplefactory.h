/*�򵥹���ģʽ
����������һ�������Ʒ���һ�����󹤳���ɣ�
�����Ʒ�࣬�����Ʒ�࣬���󹤳��࣬���幤���ࡣ
*/
#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

//�����Ʒ��
class BM {
public:
	/*�麯��
	���漰�̳й�ϵ��ʱ�򣬶���ĳЩ�����������������ϣ���и��Եİ汾����ô������Խ���������Ϊ�麯����
	���ڻ�����ԣ����еĳ�Ա�������Է�Ϊ���֣�һ��ϣ��������ֱ�Ӽ̳У��ڶ���ϣ�����������Լ��İ汾����ʱӦ������Ϊ�麯����
	������������ԣ�������һ����Ҫ��д�ӻ���̳������麯���������д�麯������ô�����ཫ���Լ��İ汾���������д����ô��ʹ�û���İ汾��
	*/
	virtual void GetBM() = 0;
	/*���麯��
	���麯�����ڻ�����û�ж��壬��Ҫ���κ������඼Ҫ�����Լ���ʵ�ַ�����
	�ڻ�����ʵ�ִ��麯���ķ������ں���ԭ�ͺ�ӡ�=0��
	������Ϊһ����������������ϻ�����ȸ�����࣬�����ﱾ�����ɶ������Բ��ϳ���
	*/

};

//�����Ʒ1
class BM111 :public BM {
public:
	BM111() {}
	void GetBM() {
		cout << "BM 111" << endl;
	}
};

//�����Ʒ2
class BM222 :public BM {
public:
	BM222() {}
	void GetBM() {
		cout << "BM 222" << endl;
	}
};

//����������򵥹����л�����ͬ�Ĳ�Ʒ���������ڳ�����Ǿ���Ĺ���
//���󹤳���
class Factory {
public:
	virtual BM* CreaterBMFactory() = 0;
};

//���幤��1
class BM111Factory :public Factory {
public:
	BM* CreaterBMFactory() {
		return new BM111();
	}
};

//���幤��2
class BM222Factory :public Factory {
public:
	BM* CreaterBMFactory() {
		return new BM222();
	}
};