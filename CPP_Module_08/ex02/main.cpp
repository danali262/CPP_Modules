#include "mutantstack.cpp"
#include <list>

int	main(void)
{
	{
		std::cout << "\t\t MutantStack test" << std::endl;

		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	{
		std::cout << "\t\t MutantStack reverse iterator test" << std::endl;

		MutantStack<int> reverse;

		reverse.push(1);
		reverse.push(2);
		reverse.push(3);
		reverse.push(4);
		reverse.push(5);

		MutantStack<int>::reverse_iterator r_iter = reverse.rbegin();

		for (;r_iter != reverse.rend(); r_iter++)
		{
			std::cout << *r_iter << std::endl;
		}
	}
	{
		std::cout << "\t\t List test" << std::endl;

		std::list<int>	list;

		list.push_back(5); 
		list.push_back(17);

		std::cout << list.back() << std::endl;

		list.pop_back();

		std::cout << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator l_it = list.begin();

		for (;l_it != list.end(); l_it++)
		{
			std::cout << *l_it << std::endl;
		}
	}

	return (0);
}
