#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &other);
		~MutantStack();
		MutantStack<T>& operator=(const MutantStack<T> &other);
	public:
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator begin();
		iterator end();
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		const_iterator begin() const;
		const_iterator end() const;

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();
		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

# include "MutantStack.tpp"

#endif