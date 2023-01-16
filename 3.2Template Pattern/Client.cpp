/*
模板方法模式的参与者有4个，分别是：

AbstractClass（ExamationPaper）抽象类
ConcreteClass（EnglishExamationPaper ChineseExamationPaper）具体表达式
Client 用户
*/

#include "ConcreteClass.h"

/*
写名字和班级
答卷
交卷
举个例子，不论是做语文卷还是英语卷都要经过这几步，但是在写班级名字时英语卷需要写英文名，答卷时所完成的内容不同。
*/

int main() {
	EnglishExamationPaper* englishPaper = new EnglishExamationPaper();
	ChineseExamationPaper* chinesePaper = new ChineseExamationPaper();

	englishPaper->doPaper();
	chinesePaper->doPaper();

	return 0;
}