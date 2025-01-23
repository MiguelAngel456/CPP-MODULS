/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:13:27 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 14:33:33 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{        
}
RPN::RPN(const RPN &cpy)
{
    *this = cpy; 
}
RPN &RPN::operator=(const RPN& cpy)
{
    if (this != &cpy)
        *this = cpy;
    return(*this);
}
RPN::~RPN()
{
    std::cout << "DESTROYED CALLED" << std::endl;
}

//METHODS
/* static void mostrarStack(std::stack<int> s) {
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
} */

int RPN::calculatorRpn(char *str)
{
    size_t len = strlen(str);
	while (this->stack.size() != 0)
		this->stack.pop();
    for (size_t i = 0; i < len; i++)
    {
        if (this->isCharValid(str[i]) == false)
                return (-1);
        if (isdigit(str[i]))
            this->stack.push(atoi(&str[i]));
        else if (this->isOperand(str[i]) == true)
            this->proccess(str[i]);
    }
    //mostrarStack(this->stack);
    if (this->stack.size() != 1)
    {
        std::cout << "Error: Invalid sequence" << std::endl;
        exit(1);
    }
    return this->stack.top();
}

bool RPN::isCharValid(const char c) const
{
	if ((isOperand(c) ==true && this->stack.size() >= 2) || c == ' ')
		return (true);
	else if (c >= '0' && c <= '9')
		return (true);
	std::cerr << "Error, invalid operand" << std::endl;
	return (false);
}

bool RPN::isOperand(const char c) const
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
}

void RPN::proccess(char c)
{
    int num = this->stack.top();
    this->stack.pop();
    int num2 = this->stack.top();
    this->stack.pop();
    if (c == '/' && num == 0)
	{
		std::cerr << "Error, cannot divide by cero" << std::endl;
		exit(1);
	}
    switch (c)
    {
        case '+':
            this->stack.push(num2+num);
            break;
        case '-':
            this->stack.push(num2-num);
            break;
        case '*':
            this->stack.push(num2*num);
            break;
        default:
            this->stack.push(num2/num);
            break;
    }
}


