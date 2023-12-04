#ifndef SPAN_HPP
# define SPAN_HPP

# include <deque>
# include <iterator>
# include <algorithm>
# include <cmath>

class Span
{
	private:
		std::deque<int>	_deq;
		unsigned int	_n;
		Span();
	public:
		Span(const unsigned int N);
		Span(const Span &other);
		Span&	operator=(const Span &other);
		~Span();
	public:
		void 			addNumber(const int num);
		void			addNumber(const std::deque<int> val);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		unsigned int	getSize() const;
	public:
		class FullElement: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class SpanNotFound: public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

#endif