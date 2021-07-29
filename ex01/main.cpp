#include "iter.hpp"

template<typename T>
void	print(const T &arg)
{
	std::cout << arg;
}

int		main()
{
	std::cout << "========= <int type> ===========" << std::endl;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arr, 10, print);

	std::cout << "========= <char type> ==========" << std::endl;
	char CharArr[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(CharArr, 5, print);
	
	std::cout << "========= <string type> =========" << std::endl;
	std::string StrArr[5] =
	{
		"Hello",
		"How are you",
		"Fine Thank you",
		"Olympic",
		"Gold Medal"
	};
	iter(StrArr, 5, print);
}