//Singleton������ʽ���ڵ�һ�ε���ʱʵ����
class Singleton {
public:
	static Singleton* Instance() {
		/*��̬��Ա����:
		�޷��������������ķǾ�̬���ݳ�Ա��Ҳ�޷����ʷǾ�̬��Ա����
		��̬��Ա�������ܷ��ʷǾ�̬��Ա�����ͷǾ�̬���ݳ�Ա���Ǿ�̬��Ա������������ط��ʾ�̬��Ա�����;�̬���ݳ�Ա
		*/

		if (m_pSingleton == nullptr) {
			m_pSingleton = new Singleton;
		}
		return m_pSingleton;
	}
private:
	Singleton();
	static Singleton* m_pSingleton;
	/*��̬���ݳ�Ա:
	����������ݳ�Ա�������Ը������ж���������ݳ�Ա��ֻ��һ��ʵ��������ʵ���� ���ж����С�
	*/
};

/*����pthread_1���ж��� intance ΪNULL Ϊ�棬׼������ʵ����ʱ��
�л�����pthread_2, ��ʱpthread_2Ҳ�ж�intanceΪNULLΪ�棬������һ��ʵ����
���л�pthread_1��ʱ���������һ��ʵ�����أ���ô��ʱ�Ͳ������㵥��ģʽ��Ҫ���ˣ� 
��Ȼ����������Ϊ���̷߳��ʳ������⣬�����Ǿ����Ӱ�����ʹ���߳�ͬ��
*/