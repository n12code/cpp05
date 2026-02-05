/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:45:59 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 00:29:08 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"
#include <iostream>
#include <string>
#include <cstring>

GradeTooHighException::GradeTooHighException()
{
    std::cout << "too high constructor called" << std::endl;
}

GradeTooHighException::~GradeTooHighException() throw()
{
    std::cout << "too high destructor called" << std::endl;
}

const char *GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}