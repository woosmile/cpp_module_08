#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template <typename T>
typename T::iterator	easyfind(T &container, int val)
{
	typename T::iterator	find;

	find = std::find(container.begin(), container.end(), val);

	if (find == container.end())
		throw (std::invalid_argument("value not found"));
	else
		return (find);
}

#endif