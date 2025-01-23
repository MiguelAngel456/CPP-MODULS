/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:49:17 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 16:43:58 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>
#include <cstring> 
#include <cstdlib>

class RPN
{
    private:
        std::stack<int> stack;
    public:
        RPN();
		RPN(const RPN &RPN);
		RPN&			operator=(const RPN&);
		~RPN();
        //METHODS
        int calculatorRpn(char *str);
        bool isCharValid(const char c) const;
        bool isOperand(const char c) const;
        void proccess(char c);
        
    
};
#endif