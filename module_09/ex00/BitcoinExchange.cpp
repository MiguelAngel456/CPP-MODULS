/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:12:48 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/13 17:43:31 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


static std::string trim(std::string str)
{
	size_t first = str.find_first_not_of(" \t\n\r\f\v");
	size_t last = str.find_last_not_of(" \t\n\r\f\v");
	return str.substr(first, (last - first + 1));
}


//En este constructor guardo los datos de data.csv 
BitcoinExchange::BitcoinExchange()
{
	std::ifstream data_file("data.csv");
	if (!data_file) throw ("MISSING data.csv");

	std::string line;
	std::string str;
	std::getline(data_file, line);
	std::stringstream ss(line);
	std::getline(ss, str, ',');
	std::getline(ss, line);
	str = trim(str);
	line = trim(line);

	if (str != "date" || line != "exchange_rate")
		throw ("Bad data.csv");

	for (std::string line; std::getline(data_file, line);)
	{
		std::string key;
		double value;
		std::stringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, line);
		value = strtod(line.c_str(), NULL);
		this->map[key] = value;
	}
	data_file.close();
}


BitcoinExchange::BitcoinExchange(BitcoinExchange &cpy)
{
    *this = cpy;
}


BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &other)
{
        if(this != &other)
            this->map = other.map;
        return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "DESTRUCTOR CALLED" << std::endl;
}

//Retorna el tiempo en formato t_unix(segundos desde la fecha)
int get_unix_time(std::string date, int input_flag)
{
    struct tm tm;
	memset(&tm, 0, sizeof(struct tm));
    if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL)
	{
		std::cerr << "Error: Bad input => " << date << "\n";
		return (-1);
	}
	int year = tm.tm_year;
	int month = tm.tm_mon;
	int day = tm.tm_mday;
	time_t t = mktime(&tm);
    if (t == -1)
	{
       	std::cerr << "Error: Bad input: => " << date << "\n";
		return (-1);
    }

	if (year != tm.tm_year || month != tm.tm_mon || day != tm.tm_mday)
	{
		std::cerr << "Error: Bad input: => " << date << "\n";
		return (-1);
	}
	return (t);
}



void BitcoinExchange::printInfo(long long quantity, std::string date)
{

	long long u_date = get_unix_time(date, 1);
	if (u_date == -1) return;

	if (quantity < 0)
	{
		std::cerr << "Error: not a positive number." << "\n";
		return;
	}
	if (quantity > 1000)
	{
		std::cerr << "Error: too large a number." << "\n";
		return;
	}

	std::map<std::string, double>::iterator it = this->map.begin();
	while (it != this->map.end())
	{
		long long u_key = get_unix_time(it->first, 0);
		if (u_key == u_date)
			break;
		if (u_key > u_date)
		{
			it--;
			break;
		}
		it++;
	}

	if (it == this->map.end()) it--;
	std::cout << date << " => " << quantity << " = ";
	std::cout << quantity * map[it->first] << "\n";
}
//Saco la info del archivo que le paso como argumento
void BitcoinExchange::parse_file(char *filename)
{
	std::ifstream file(filename);
	if (!file) throw ("MISSING input file");

	std::string line;
	std::string str;
	std::getline(file, line);
	std::stringstream ss(line);
	std::getline(ss, str, '|');
	std::getline(ss, line);
	str = trim(str);
	line = trim(line);

	if (str != "date" || line != "value")
		throw ("Bad input file");

	for (std::string line; std::getline(file, line);)
	{
		std::stringstream ss(line);
		std::string date;
		int empty_flag = !strchr(line.c_str(), '|');
		std::getline(ss, date, '|');
		std::getline(ss, line);
		long long value = atoll(line.c_str());
		if (empty_flag) value = 0;
		printInfo(value, date);
	}
	file.close();
}