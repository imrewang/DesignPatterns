#ifndef ITERATOR_H
#define ITERATOR_H

/*Iterator 抽象迭代器，定义访问和遍历的接口*/
//抽象迭代器（Iterator ）
template<class Item>
class Iterator
{
public:
	Iterator(){}
	virtual ~Iterator(){}

	virtual void first() = 0;
	virtual void next() = 0;
	virtual Item* currentItem() = 0;
	virtual bool isDone() = 0;
};



#endif // !ITERATOR_H
