/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExecption.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:45:15 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/05 18:03:45 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowExecption.hpp"
#include <iostream>
#include <string>
#include <cstring>

GradeTooLowException::GradeTooLowException()
{
    std::cout << "too low constructor called" << std::endl;
}

GradeTooLowException::~GradeTooLowException()
{
    std::cout << "too low destructor called" << std::endl;
}

const char *GradeTooLowException::what() const throw()
{
    const std::string message = "Grade is too low!";
    return message.c_str();
}
