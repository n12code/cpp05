/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExecption.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:45:59 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/05 18:03:37 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighExecption.hpp"
#include <iostream>
#include <string>
#include <cstring>

GradeTooHighException::GradeTooHighException()
{
    std::cout << "too high constructor called" << std::endl;
}

GradeTooHighException::~GradeTooHighException()
{
    std::cout << "too high destructor called" << std::endl;
}

const char *GradeTooHighException::what() const throw()
{
    const std::string message = "Grade is too high!";
    return message.c_str();
}