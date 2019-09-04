#include <iostream>

//���ͱ��  Generic programming

/*nt add(int a, int b)
{
	
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}*/

//
//template <typename T>
//T add(T a, T b)
//{
//	result a + b;
//}

template <typename T,typename T1>
class Oper
{
public:
	T add(T a, T b)
	{
		return a + b;
	}

	T1 subtract(T1 a, T1 b)
	{
		return a - b;
	}
};

int main()
{
	Oper<int,float> oper;              //ģ����ʱ����ʵ������Ҫ�г�ȫ������
	auto result = oper.subtract(4.0, 5.0);
	std::cout << result << std::endl;
	return 0;
}