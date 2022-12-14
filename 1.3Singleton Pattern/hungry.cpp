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
//饿汉式单例模式实现比较简单粗暴，直接在类外创建对象，当该类创建时对象即被创建

/*饿汉就是类一旦加载，就把单例初始化完成，保证Instance的时候，单例是已经存在的了，
而懒汉只有当调用Instance的时候，才回去初始化这个单例。
*/

/*不管是什么实现形式，
单例模式最核心的思想在于保证一个单例对象的全局唯一性，并且提供给外部一个访问该唯一对象的接口。
唯一！唯一! 唯一！
*/
