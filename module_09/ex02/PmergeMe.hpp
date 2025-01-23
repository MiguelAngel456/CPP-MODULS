/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:42:41 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 18:44:13 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <limits>
#include <algorithm>
#include <iomanip>

# define LIST	0
# define VECTOR	1

class PmergeMe
{
    private:
		std::vector<int>	vector;
		std::list<int>		list;
		double				time[2];
		size_t				size;
    public:
        PmergeMe();
		PmergeMe(const PmergeMe &PmergeMe);
		PmergeMe&			operator=(const PmergeMe&);
		~PmergeMe();
        //METHODS
		void addnumbers(char *str);
		void sort();
		void print_vector();
		void sort_list();
		void sort_vector();
       
    
};
#endif