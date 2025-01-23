/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:56:25 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/12 15:50:39 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
    this->length = 0;
}

Span::Span(unsigned int size)
{
    this->length = size;
}
Span::Span(const Span &cpy)
{
    *this = cpy;
}

Span::~Span()
{
    std::cout << "SPAM DESTROYED" << std::endl;
}

Span &Span::operator=(const Span& cpy)
{
    this->length = cpy.length;
    this->vec = cpy.vec;
    return *this;
}

//**************METHODS************** */
void Span::addNumber(int num)
{
    if (this->vec.size() + 1 > this->length)
        throw ManyNumbersException();
    this->vec.push_back(num);
}


static int numMax(std::vector<int> vec)
{
    std::vector<int>::iterator it = vec.begin();
    int max = *it;
    it++;
    while (it != vec.end())
    {
        if (*it > max)
            max = *it;
        it++; 
    }
    return max;
}

static int numMin(std::vector<int> vec)
{
    std::vector<int>::iterator it = vec.begin();
    int min = *it;
    it++;
    while (it != vec.end())
    {
        if (*it < min)
            min = *it;
        it++; 
    }
    return min;
}

unsigned int Span::shortestSpan()
{
    if (this->vec.size() < 2)
        throw FewNumbersException();
    std::sort(this->vec.begin(), this->vec.end());

	unsigned int span = -1;
	unsigned int tmp = 0;

	std::vector<int>::const_iterator it = this->vec.begin();

	while (it < this->vec.end())
	{
        tmp = std::abs(*it - *(it + 1));
		if (tmp < span)
			span = tmp;
		++it;
	}
	return span;
}

unsigned int Span::longestSpan()
{
    if (this->vec.size() < 2)
        throw FewNumbersException();
    return (numMax(this->vec) - numMin(this->vec));
}
//**************EXCEPTIONS**************
const char*	Span::ManyNumbersException::what() const throw() {
	return "FULL";
}

const char*	Span::FewNumbersException::what() const throw() {
	return "FEW NUMBERS";
}

