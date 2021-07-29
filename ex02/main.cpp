#include "Array.hpp"

int		main()
{
	std::cout << "============= <Default test> =============" << std::endl;
	{
		std::cout << "-------- 1. int test ---------" << std::endl;
		Array<int> IntArray(5);
		for (int i = 0; i < IntArray.size(); i++)
		{
			std::cout << IntArray[i] << ' ';
		}
		std::cout << std::endl;
	}
}