//Client �û�

/*
�����˽�ɫ/�����ݵĽ�ɫ(Originator)��  ���𴴽�һ������¼����¼������Ҫ�����״̬��������Ҫ�߱�״̬�Ļع����ܡ�
����¼��ɫ(Memento)��  ���ڴ洢Originator��ɫ���ڲ�״̬���ҿ��Է�ֹOriginator����Ķ�����з���Memento��
�����˽�ɫ/����¼����Ա��ɫ(Caretaker)��  ����洢��������¼���ܡ����䱾��Ӧ���޷��Ա���¼�����ݽ��з���
�û�(Client)
*/

/*
��Linux Shellִ���������ӣ���һ��Shell�������ͨ����ִ��һЩ���
��ִ������������ǿ������һ�֮ǰִ�й���ָ���ı�
���൱�������ڲ���linux�����ʱ���� \uparrow���͡� \downarrow����ťʱ����Կ�����ʾ֮ǰ����������У�
�ָ���������ٴΰ��س�����ִ��
*/

#include "Caretaker.h"
#include "Originator.h"

/*����¼ģʽ���ڲ��ƻ���װ�Ե�ǰ���£�����һ��������ڲ�״̬�����ڸö���֮�Ᵽ�����״̬�������Ժ�Ϳɽ��ö���ָ���ԭ�ȱ����״̬��*/


/*�����䡱����¼ģʽ
����¼��ɫ�ṩһ����ӿڵĻ�������¼���ڲ��洢״̬�Ͷ����ж��󹫿�������ǡ�����ʵ�֡���
�����䡱ʵ���ƻ��˷�װ�ԣ�����ͨ������Ա���ɣ����Է����ʵ�ֱ���¼ģʽ��*/
/*���䡱����¼ģʽ
�����ڲ��������Ʒ���Ȩ�ޡ�������¼��ɫ��Ϊ�����������ɫ����һ��˽���ڲ��ࡣ
������¼��ɫ�ࣨMemento����Ƴɷ����˽�ɫ��(Originator)�� ���ڲ���Ա�ࡱ���Ӷ���Memento�����װ��Originator���档*/


int main() {
	MemoContainer memoContainer;
	LinuxShell linuxShell;

	linuxShell.type("cd ~");
	memoContainer.save(linuxShell.execute());
	linuxShell.type("ls -al");
	memoContainer.save(linuxShell.execute());
	linuxShell.type("cal 2022");
	memoContainer.save(linuxShell.execute());

	cout << "----------------------------------------" << endl;
	linuxShell.load(memoContainer.goBack());
	//����caretaker��goback��������Memo����load������momento�е���getstateȻ�����m_str
	linuxShell.execute();
	linuxShell.load(memoContainer.goBack());
	linuxShell.execute();

	return 0;
}