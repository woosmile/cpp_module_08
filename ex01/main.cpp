#include <iostream>
#include "Span.hpp"

int main(void)
{
	Span sp1 = Span(7);
	Span sp2 = Span(2003);
	std::deque<int>	deq;
	
	try
	{
		sp1.addNumber(6);
		sp1.addNumber(-50);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		sp1.addNumber(18);
		sp1.addNumber(18);
		for(int i = 0; i <= 20000; i = i + 10)
		{
			deq.push_back(i);
		}
		sp2.addNumber(-1);
		sp2.addNumber(0);
		sp2.addNumber(deq);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest span of sp1 : " << sp1.shortestSpan() << std::endl;
		std::cout << "longest span of sp1 : " << sp1.longestSpan() << std::endl;
		std::cout << "shortest span of sp2 : " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span of sp2 : " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}