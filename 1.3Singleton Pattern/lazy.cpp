//Singleton类懒汉式，在第一次调用时实例化
class Singleton {
public:
	static Singleton* Instance() {
		/*静态成员函数:
		无法访问属于类对象的非静态数据成员，也无法访问非静态成员函数
		静态成员函数不能访问非静态成员函数和非静态数据成员；非静态成员函数可以任意地访问静态成员函数和静态数据成员
		*/

		if (m_pSingleton == nullptr) {
			m_pSingleton = new Singleton;
		}
		return m_pSingleton;
	}
private:
	Singleton();
	static Singleton* m_pSingleton;
	/*静态数据成员:
	修饰类的数据成员，表明对该类所有对象这个数据成员都只有一个实例。即该实例归 所有对象共有。
	*/
};

/*假设pthread_1刚判断完 intance 为NULL 为真，准备创建实例的时候，
切换到了pthread_2, 此时pthread_2也判断intance为NULL为真，创建了一个实例，
再切回pthread_1的时候继续创建一个实例返回，那么此时就不再满足单例模式的要求了， 
既然这样，是因为多线程访问出的问题，那我们就来加把锁，使得线程同步
*/
