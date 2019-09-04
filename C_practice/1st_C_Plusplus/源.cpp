#include <iostream>

using namespace std;


// abstract class.
class IBase
{
public:
	virtual void bar(void) const = 0;      //纯虚函数只有虚函数表，32位内存下就是4字节，64位内存下是8个字节 

private:

};

class Child :public IBase
{
public:
	void bar(void) const override  //重载    后面加final： 类无法被继承
	{
		cout << "Child()~" << endl;
	}
};

class Child2 :public Child
{
public:
	void bar(void) const override
	{
		cout << "Child2()" << endl;
	}
};

int main(void)
{
	cout << sizeof(IBase) << endl;
	/*IBase* base = new Child;
	base->bar();
	delete base;
	base = NULL;*/
	return 0;
}