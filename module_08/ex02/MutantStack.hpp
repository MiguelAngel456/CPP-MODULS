/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:54:49 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/12 16:30:35 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <stack>
#include <list>

template<typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &original);
		MutantStack &operator= (const MutantStack &other);
		~MutantStack();
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
			
};

#include "./MutantStack.tpp"
#endif