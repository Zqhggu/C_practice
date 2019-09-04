#include <iostream>

using namespace std;


// abstract class.
class IBase
{
public:
	virtual void bar(void) const = 0;      //���麯��ֻ���麯����32λ�ڴ��¾���4�ֽڣ�64λ�ڴ�����8���ֽ� 

private:

};

class Child :public IBase
{
public:
	void bar(void) const override  //����    �����final�� ���޷����̳�
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