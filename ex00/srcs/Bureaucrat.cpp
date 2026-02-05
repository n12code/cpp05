/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:52:35 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/05 18:26:06 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
{
    //check if grade is in the range with try and catch
    std::cout << "bureaucrat constructor called" << std::endl; 
}

Bureaucrat::~Bureaucrat() {}
{
    std::cout << "bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &obj) :
    _name(obj._name),
    _grade(obj._grade)
{
    std::cout << "bureaucrat copy constructor called" << std::endl;
}

Bureaucrat Bureaucrat::operator=(Bureaucrat &obj)
{
    return Bureaucrat();
}
