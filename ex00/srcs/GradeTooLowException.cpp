/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:45:15 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 00:29:01 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"
#include <iostream>
#include <string>
#include <cstring>

GradeTooLowException::GradeTooLowException()
{
    std::cout << "too low constructor called" << std::endl;
}

GradeTooLowException::~GradeTooLowException() throw()
{
    std::cout << "too low destructor called" << std::endl;
}

const char *GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}
