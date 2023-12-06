#include "Span.hpp"

Span::Span()
{
}

Span::Span(const unsigned int N): _n(N)
{
}

Span::Span(const Span &other): _deq(other._deq), _n(other.getSize())
{
}

Span&	Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_deq = other._deq;
		_n = other.getSize();
	}
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(const int num)
{
	if (_deq.size() < _n)
		_deq.push_back(num);
	else
		throw (Span::FullElement());
}

void	Span::addNumber(const std::deque<int> new_deq)
{
	if (_deq.size() + new_deq.size() <= _n)
	{
		std::deque<int>::iterator _deq_it_end = _deq.end();
		_deq.insert(_deq_it_end, new_deq.begin(), new_deq.end());
	}
	else
		throw (Span::FullElement());
}

unsigned int	Span::shortestSpan() const
{
	unsigned int	short_span = 0;
	
	if (_deq.size() >= 2)
	{
		std::deque<int> sort = _deq;
		std::deque<int>::iterator it = sort.begin();
		std::sort(sort.begin(), sort.end());
		short_span = *(it + 1) - *it;
		it++;
		for (; it != sort.end() - 1; it++)
		{
			if (short_span > static_cast<unsigned int>(std::abs(static_cast<long long>(*(it + 1)) - static_cast<long long>(*it))))
				short_span = static_cast<unsigned int>(std::abs(static_cast<long long>(*(it + 1)) - static_cast<long long>(*it)));
		}
	}
	else
		throw (Span::SpanNotFound());
	return (short_span);
}

unsigned int	Span::longestSpan() const
{
	unsigned int	long_span = 0;

	if (_deq.size() >= 2)
	{
		std::deque<int> sort = _deq;
		std::sort(sort.begin(), sort.end());
		long_span = static_cast<unsigned int>(std::abs(static_cast<long long>(*sort.rbegin()) - static_cast<long long>(*sort.begin())));
	}
	else
		throw (Span::SpanNotFound());
	return (long_span);
}

unsigned int Span::getSize() const
{
	return (_n);
}

const char* Span::FullElement::what() const throw()
{
	return ("The element is full");
}

const char* Span::SpanNotFound::what() const throw()
{
	return ("No span can be found");
}