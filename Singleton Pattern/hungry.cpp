class Singleton {
private:
	Singleton();
	
	static Singleton* m_pSingleton;
public:
	static Singleton* Instance() {
		return m_pSingleton;
	}
};

Singleton* Singleton::m_pSingleton = new Singleton();
//����ʽ����ģʽʵ�ֱȽϼ򵥴ֱ���ֱ�������ⴴ�����󣬵����ഴ��ʱ���󼴱�����

/*����������һ�����أ��Ͱѵ�����ʼ����ɣ���֤Instance��ʱ�򣬵������Ѿ����ڵ��ˣ�
������ֻ�е�����Instance��ʱ�򣬲Ż�ȥ��ʼ�����������
*/

/*������ʲôʵ����ʽ��
����ģʽ����ĵ�˼�����ڱ�֤һ�����������ȫ��Ψһ�ԣ������ṩ���ⲿһ�����ʸ�Ψһ����Ľӿڡ�
Ψһ��Ψһ! Ψһ��
*/