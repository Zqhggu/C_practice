#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(void)
{
	array<array<int, 10>, 5> arr;    //五行十列
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 10; ++j)
			arr[i][j] = i + j;
	}
	

	array<array<int, 10>, 5>::const_iterator cit;
	for (cit = arr.cbegin(); cit != arr.cend(); ++cit)
	{
		for (auto cit1 = (*cit).cbegin(); cit1 != cit->cend(); ++cit1)
		{
			cout << *cit1 << endl;
		}
		
	}
	return 0;
}