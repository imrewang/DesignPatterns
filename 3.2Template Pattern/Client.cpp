/*
ģ�巽��ģʽ�Ĳ�������4�����ֱ��ǣ�

AbstractClass��ExamationPaper��������
ConcreteClass��EnglishExamationPaper ChineseExamationPaper��������ʽ
Client �û�
*/

#include "ConcreteClass.h"

/*
д���ֺͰ༶
���
����
�ٸ����ӣ������������ľ���Ӣ���Ҫ�����⼸����������д�༶����ʱӢ�����ҪдӢ���������ʱ����ɵ����ݲ�ͬ��
*/

int main() {
	EnglishExamationPaper* englishPaper = new EnglishExamationPaper();
	ChineseExamationPaper* chinesePaper = new ChineseExamationPaper();

	englishPaper->doPaper();
	chinesePaper->doPaper();

	return 0;
}