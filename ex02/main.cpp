#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	
	std::cout << "-----mstack default test-----" << std::endl;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	std::cout << "-----mstack default test : iterator-----" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "-----stack copy test-----" << std::endl;
	std::stack<int> s(mstack);

	while (s.size() > 0)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	/*-----list-----*/

	std::list<int> list;
	
	std::cout << "-----list default test-----" << std::endl;

	list.push_back(5);
	list.push_back(17);
	
	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	std::cout << "-----list default test : iterator-----" << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	
	std::list<int>::iterator it_list = list.begin();
	std::list<int>::iterator ite_list = list.end();
	
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}

	/*-----My personal test-----*/

	MutantStack<int> my_own_mstack;

	for (int i = 10; i < 20; i++)
	{
		my_own_mstack.push(i);
	}

	std::cout << "-----my own test : rbegin, rend-----" << std::endl;
	for (MutantStack<int>::reverse_iterator it_my = my_own_mstack.rbegin(); it_my != my_own_mstack.rend(); it_my++)
	{
		std::cout << *it_my << std::endl;
	}

	return (0);
}