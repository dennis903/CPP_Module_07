#include "Array.hpp"

int		main()
{
	std::cout << "============= <Default test> =============" << std::endl;
	{
		std::cout << "-------- 1. int test ---------" << std::endl;
		Array<int> IntArray(5);
		for (unsigned int i = 0; i < IntArray.size(); i++)
			IntArray[i] = i;
		for (unsigned int i = 0; i < IntArray.size(); i++)
			std::cout << IntArray[i] << ' ';
		std::cout << std::endl;
	}
	{
		std::cout << "-------- 2. char test --------" << std::endl;
		Array<char> CharArray(5);
		for (unsigned int i = 0; i < CharArray.size(); i++)
			CharArray[i] = i + 65;
		for (unsigned int i = 0; i < CharArray.size(); i++)
			std::cout << CharArray[i] << ' ';
		std::cout << std::endl;
	}
	std::cout << "============== <Copy test> ==============" << std::endl;
	{
		Array<int> IntArray(5);
		for (unsigned int i = 0; i < IntArray.size(); i++)
			IntArray[i] = i;
		std::cout << " Int array test : ";
		for (unsigned int i = 0; i < IntArray.size(); i++)
			std::cout << IntArray[i] << ' ';
		std::cout << std::endl;
		std::cout << " Copy int array test : ";
		Array<int> CopyArray(IntArray);
		CopyArray[3] = 42;
		for (unsigned int i = 0; i < CopyArray.size(); i++)
			std::cout << CopyArray[i] << ' ';
		std::cout << std::endl;
		std::cout << " Int array test2 : ";
		for (unsigned int i = 0; i < IntArray.size(); i++)
			std::cout << IntArray[i] << ' ';
		std::cout << std::endl;
	}
}