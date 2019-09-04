#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Testing
{
public:
	Testing(int a)
	{
		m_value = a;
		cout << "Testing()" << endl;
	}

	void show(void) const
	{
		cout << m_value << endl;;
	}

	~Testing()
	{
		cout << "~Testing()" << endl;
	}
private:
	int m_value;
};

int main(void)
{
	vector<Testing> vec;
	Testing tst(5);

	vec.emplace_back(tst);

	return 0;
}