/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:56:36 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/12 15:14:32 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int length;
    public:
        Span();
        Span(unsigned int size);
        Span(const Span &cpy);
        ~Span();
        Span &operator=(const Span& cpy);
        //METHODS
        void addNumber(int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class ManyNumbersException: public std::exception {
			virtual const char*	what() const throw();
		};
        class FewNumbersException: public std::exception {
			virtual const char*	what() const throw();
		};
};

#endif