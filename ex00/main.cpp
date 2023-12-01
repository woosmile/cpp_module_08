#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	
	for (int i = 0; i < 10; ++i)
		vec.push_back(i);

	if (easyfind(vec, 5) == 0)
		std::cout << "find success!" << std::endl;
	else
		std::cout << "find failed!" << std::endl;
	
	return (0);
}