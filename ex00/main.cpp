#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	vec;
	try
	{
		for (int i = 0; i < 10; i++)
			vec.push_back(i);
		std::cout << *easyfind(vec, 5) << std::endl;
		std::cout << "value found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::deque<int>		deq;
	try
	{
		for (int i = 6; i < 16; i++)
			deq.push_back(i);
		std::cout << *easyfind(vec, 7) << std::endl;
		std::cout << "value found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::list<int>		list;
	try
	{
		for (int i = 12; i < 22; i++)
			list.push_back(i);
		std::cout << *easyfind(vec, 10) << std::endl;
		std::cout << "value found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}