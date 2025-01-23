/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:55:05 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/12 16:30:37 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &original): std::stack<T>(original)
{
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator= (const MutantStack &other)
{
	std::stack<T>::operator = (other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}