#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<typename T>
void	iter(T* arr, unsigned int length, void(*fptr)(const T & arg))
{
	if (arr == NULL || length < 0 || fptr == NULL)
		return ;
	for (unsigned int i = 0; i < length; i++)
	{
		fptr(arr[i]);
		std::cout << ' ';
	}
	std::cout << std::endl;
}

template<>
void	iter(std::string *arr, unsigned int length, void(*fptr)(const std::string & arg))
{
	if (arr == NULL || length < 0 || fptr == NULL)
		return ;
	for (unsigned int i = 0; i < length; i++)
	{
		fptr(arr[i]);
		std::cout << std::endl;
	}
}
#endif