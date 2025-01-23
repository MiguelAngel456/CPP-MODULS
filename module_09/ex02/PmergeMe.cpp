/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:42:52 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 18:45:02 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	size = 0;
	time[LIST] = 0;
	time[VECTOR] = 0;
}

PmergeMe::PmergeMe(const PmergeMe &PmergeMe)
{
	*this = PmergeMe;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &PmergeMe)
{
    this->vector = PmergeMe.vector;
	this->list = PmergeMe.list;
	this->size = PmergeMe.size;
    return *this;
}

PmergeMe::~PmergeMe()
{
    std::cout << "DESTOYED CALLED" << std::endl;
}

//METHODS

void PmergeMe::addnumbers(char *str)
{
    long long num = atoll(str);
	if (num > std::numeric_limits<int>::max() || num < 0)
		throw "NUMBERS NOT VALID";
	vector.push_back(num);
	list.push_back(num);
	this->size++;
}



void PmergeMe::sort()
{
	std::cout << "Before:\t" ;
	this->print_vector();
	this->sort_list();
	this->sort_vector();
	std::cout << "After:\t" ;
	this->print_vector();
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << this->size << " elements with std::list   :   " ;
	std::cout << time[LIST] << " us\n";
	std::cout << "Time to process a range of " << this->size << " elements with std::vector :   " ;
	std::cout << time[VECTOR] << " us\n";
	
}



void PmergeMe::print_vector()
{
	size_t times = 0;

	if (this->size <= 5)
		times = this->size;
	else
		times = 4;
	for (size_t i = 0; i < times; i++)
	{
		std::cout << vector[i] << " ";
	}
	if (this->size > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}


void PmergeMe::sort_list()
{
    //cosa para el tiempo
	clock_t start = clock();

	std::list< std::list<int> > matrix;
    //Primero lo fusiona en una matriz que  contendra lsitas de dos numeros (5 1 3 6)--> {5, 1}{3 6}
	for (std::list<int>::iterator it = this->list.begin(); it != this->list.end(); )
	{
		std::list<int> sub;
		sub.push_back(*it);
		it++;
		if (it != this->list.end())
		{
			sub.push_back(*it);
			it++;
		}
		matrix.push_back(sub);
	}
    //ordena todas las sublistas
	for (std::list< std::list<int> >::iterator it = matrix.begin(); it != matrix.end(); it++)
	{
		(*it).sort();
	}
    //Fusiona las listas(se encarga solo el merge de que al fusionarlas se fusionen en orden)
	while (matrix.size() > 1)
    {
        std::list< std::list<int> >::iterator i = matrix.begin();
        std::list< std::list<int> >::iterator j = i;
		j++;
        std::list<int> temp;
        std::merge(i->begin(), i->end(), j->begin(), j->end(), std::back_inserter(temp));
   	    j = matrix.erase(j);
		matrix.erase(i);
		matrix.push_back(temp);
	}

	this->list = matrix.front();
    //cosas para el tiempo
	clock_t end = clock();
	this->time[LIST] = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 10;
}

//Parecido al anterior
void PmergeMe::sort_vector(void)
{
    //Cosas para el tiempo
	clock_t start = clock();

	std::vector<std::vector<int> > matrix;

    //Voy haciendo una matriz de vectores de dos numeros (5 1 3 6)--> {5, 1}{3 6}
	for (size_t i = 0; i < this->size; i += 2)
	{
		std::vector<int> sub;
		sub.push_back(this->vector[i]);
		if (i + 1 != size)
			sub.push_back(this->vector[i + 1]);
		matrix.push_back(sub);
	}
    //Los ordena con swap porque solo son 2
	for (size_t i = 0; i < matrix.size(); i++)
	{
		if (matrix[i].size() == 2 && matrix[i][0] > matrix[i][1])
			std::swap(matrix[i][0], matrix[i][1]);
	}
    //Se encarga de ordenar 
	while (matrix.size() > 1)
	{
		size_t i = 0;
		size_t j = 0;
		std::vector<int> temp;

		while (i < matrix[0].size() && j < matrix[1].size())
		{
			if (matrix[0][i] < matrix[1][j])
				temp.push_back(matrix[0][i++]);
			else
				temp.push_back(matrix[1][j++]);
		}
		while (i < matrix[0].size())
			temp.push_back(matrix[0][i++]);
		while (j < matrix[1].size())
			temp.push_back(matrix[1][j++]);
		matrix.erase(matrix.begin());
		matrix.erase(matrix.begin());
		matrix.push_back(temp);
	}
	this->vector = matrix[0];
    //Cosas del tiempo
    
	clock_t end = clock();
	this->time[VECTOR] = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 10;
}