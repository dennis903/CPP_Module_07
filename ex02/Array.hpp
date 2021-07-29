#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
template<typename T>
class Array
{
	private:
		T*	m_arr;
		unsigned int n;
	public:
		Array() : m_arr(new T), n(0) {}
		Array(unsigned int input) : m_arr(new T[input]), n(input) {}
		Array(const Array &_Array)
		{
			this->m_arr = new T[_Array.n];
			this->n = _Array.n;

			for (unsigned int i = 0; i < this->n; i++)
			{
				this->m_arr[i] = _Array.m_arr[i];
			}
		}
		Array &operator = (const Array &_Array)
		{
			if (this == &_Array)
				return (*this);
			if (this->n != _Array.n)
			{
				if (m_arr && this->n > 0)
					delete[] m_arr;
				this->n = _Array.n;
				this->m_arr = new T[this->n];
			}
			for (unsigned int i = 0; i < this->n; i++)
			{
				this->m_arr[i] = _Array.m_arr[i];
			}
			return (*this);
		}
		T& operator [] (const unsigned int index)
		{
			if (index < 0 || index >= this->n)
				throw	IndexError();
			return (this->m_arr[index]);
		}
		unsigned int size() const
		{
			return (this->n);
		}
		class IndexError : public std::exception
		{
			public:
				virtual const char *what() const
				{
					return ("This is Wrong index");
				}
		}
};
#endif