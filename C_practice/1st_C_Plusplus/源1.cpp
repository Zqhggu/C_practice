#include <iostream>

using namespace std;


// abstract class.
class IBase
{
public:
	virtual void bar(void) const  
	{
		cout << "IBase()" << endl;
	}
private:

};

class Child :public IBase
{
public:
	void bar(void) const override  //жиди    
	{
		cout << "Child()~" << endl;
	}
};

int main(void)
{
	
	return 0;
}