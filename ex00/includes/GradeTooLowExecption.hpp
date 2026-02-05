/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowExecption.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:39:19 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/05 17:44:55 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_TOO_LOW_EXCEPTION
# define GRADE_TOO_LOW_EXCEPTION

# include <exception>
# include <string>

class GradeTooLowException : public std::exception
{
    public:
        GradeTooLowException();
        virtual ~GradeTooLowException();
        virtual const char* what() const throw();
};

#endif