/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighExecption.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:39:19 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 00:15:31 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADE_TOO_HIGH_EXCEPTION
# define GRADE_TOO_HIGH_EXCEPTION

# include <exception>
# include <string>

//need orthodox ?

class GradeTooHighException : public std::exception
{
    public:
        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        virtual const char* what() const throw();
};

#endif