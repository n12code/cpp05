/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:52:35 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 23:25:40 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat() :
    _name("anonymous"),
    _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade):
    _name(name)
{
    try {
        if (grade < 1)
            throw (Bureaucrat::GradeTooHighException());
        else if (grade > 150)
            throw (Bureaucrat::GradeTooLowException());
        else
            this->_grade = grade;
    }
    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) :
    _name(obj._name),
    _grade(obj._grade) {}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        this->_grade = obj._grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return (os);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::increment()
{
    this->_grade--;
    if (this->_grade < 1)
            throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrement()
{
    this->_grade++;
    if (this->_grade > 150)
            throw (Bureaucrat::GradeTooLowException());
}