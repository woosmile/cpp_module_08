#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
bool	easyfind(T &container, int val)
{
	typename T::iterator	last;

	last = std::find(container.begin(), container.end(), val);

	if (last == container.end())
		return (1);
	return (0);
}

#endif