//------------------------------------------------------------------------------------------

//                 Abort() ����ԭ��λ��ͷ�ļ�stdlib.h�У������ʵ�������׼������������Ϣ
//                         abnormal program terminaltion�������쳣��ֹ����Ȼ����ֹ����

//------------------------------------------------------------------------------------------
//using the abort() function

#include <iostream>
#include <stdlib.h>

double hmean(double a, double b);
int main()
{
	double x, y, z;
	std::cout << " Enter two number��";
	while (std::cin >> x >> y)
	{
		z = hmean(x, y);
		std::cout << " Hermonic mean of " << x << " and " << y
			<< " is " << z << std::endl;
		std::cout << " Enter next set of number <q to quit>: ";
	}
	std::cout << "Bye!\n";
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b) 
	{
		std::cout << " untenable argument to hmean()\n ";
		std::abort();
	}
	return 2.0*a*b / (a + b);                  //����ƽ���������������ֵ�����ƽ��ֵ�ĵ���
}
