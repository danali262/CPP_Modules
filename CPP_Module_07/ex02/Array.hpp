#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>

class Array
{
	private:
		unsigned int	a_length;
		T				*a_data;
	public:
		Array(void)
		{
			a_data = new T[0];
			a_length = 0;
			std::cout << "Empty array was created." << std::endl;
		}

		Array(unsigned int n)
		{
			a_data = new T[n];
			a_length = n;	
			std::cout << "Array of length " << n << " was created." << std::endl;
		}

		Array(const Array &a)
		{
			unsigned int	i;

			this->a_length = a.size();
			this->a_data = new T[a.size()];
			for (i = 0; i < a.size(); i++)
				this->a_data[i] = a[i];
			std::cout << "Array was created via Copy Constructor." << std::endl;
		}

		Array<T>	&operator=(const Array &a)
		{
			unsigned int	i;

			if (this != &a)
			{
				this->~Array();
				this->a_length = a.size();
				this->a_data = new T[a.size()];
				for (i = 0; i < a_length; i++)
					this->a_data[i] = a[i];
			}
			std::cout << "Array was created via Assignment Operator." << std::endl;
			return (*this);
		}

		class OutOfRangeException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Warning: trying to access out of limits memory.\n");
				}
		};
		
		T	&operator[](int index)
		{
			if (index < 0 || index >= static_cast<int>(this->a_length))
				throw Array::OutOfRangeException();
			return (this->a_data[index]);
		}	

		T	operator[](int index) const
		{
			if (index < 0 || index >= static_cast<int>(this->a_length))
				throw Array::OutOfRangeException();
			return (this->a_data[index]);
		}

		unsigned int size(void) const { return this->a_length; }

		~Array(void)
		{
			delete[]	this->a_data;
		}
};

#endif
