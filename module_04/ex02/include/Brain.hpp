/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:45:45 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 15:44:10 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
protected:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &copy);//ES CONST & PORQUE EFICACIA(No hacer copia de objeto), PUEDE PASAR UNA RECURSION INFINITA, RENDIMIENTO
    Brain &operator=(const Brain& otro);

    const std::string *getIdeas() const;
    void setIdeas( int i,  std::string idea);
    
};
#endif