/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:08:34 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/10 18:26:31 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
    private:
        T* array;
        unsigned int length;
    public:
        Array();
        Array(unsigned int n);
        Array(Array &cpy);
        ~Array();
        Array &operator=(const Array& otro);
        T &operator[](unsigned int n);
        int size() const;
};
//METHODS

template <typename T>
Array<T>::Array()
{
    this->array = NULL;
    this->length = 0;
    std::cout << "ARRAY DEFAULT CREATED" << std::endl;    
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n];
    this->length = n;
    std::cout << "ARRAY WITH LENGTH "<< n << " CREATED" << std::endl;    
}

template <typename T>
Array<T>::Array(Array &cpy)
{
    this->length = cpy.length;
    this->array = new T[cpy.length];
    for (size_t i = 0; i < cpy.length; i++)
    {
        this->array[i] = cpy.array[i];
    }
}
template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
    std::cout << "ARRAY WITH LENGTH "<< this->length << " DESTROYED" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &otro)
{
	if (this != &otro)
	{
		if (this->array)
			delete[] this->array;
		this->length = otro.length;
		this->array = new T[this->length];
		for (int i = 0; i < (int)this->length; i++)
			this->array[i] = otro.array[i];
	}
	return (*this);
}
template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= this->length)
		throw std::exception();
	return (this->array[n]);
}
template <typename T>
int Array<T>::size() const
{
    return this->length;
}



#endif