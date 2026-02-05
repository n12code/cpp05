/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:52:35 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 00:29:33 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(const std::string &name, const int &grade):
    _name(name)
{
    std::cout << "bureaucrat constructor called" << std::endl; 
    try {
        if (grade < 1)
            throw (GradeTooHighException());
        else if (grade > 150)
            throw (GradeTooLowException());
    }
    catch (const GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) :
    _name(obj._name),
    _grade(obj._grade)
{
    std::cout << "bureaucrat copy constructor called" << std::endl;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        this->_grade = obj._grade;
    return (*this);
}
