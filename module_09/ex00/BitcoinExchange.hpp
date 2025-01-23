/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:22:30 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/13 16:21:54 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <iomanip>
#include <ctime>
class BitcoinExchange
{
    private:
        std::map<std::string, double> map;
    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange &cpy);
        ~BitcoinExchange();
        BitcoinExchange& operator = (const BitcoinExchange &other);
        //METHODS
        void printInfo(long long quantity, std::string date);
        void parse_file(char *filename);
};


#endif