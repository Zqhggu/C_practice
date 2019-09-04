//------------------------------------------------------------------------------------------

//                 Abort() 函数原型位于头文件stdlib.h中，其典型实现是向标准错误流发送消息
//                         abnormal program terminaltion（程序异常终止），然后终止程序

//------------------------------------------------------------------------------------------
//using the abort() function

#include <iostream>
#include <stdlib.h>

double hmean(double a, double b);
int main()
{
	double x, y, z;
	std::cout << " Enter two number：";
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
	return 2.0*a*b / (a + b);                  //调和平均数：这两个数字倒数的平均值的倒数
}
