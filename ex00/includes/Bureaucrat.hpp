/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:46:58 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/05 18:27:52 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <string>
// # include "GradeTooHighExecption.hpp"
// # include "GradeTooLowExecption.hpp"

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;
        
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat &obj);
        Bureaucrat operator=(Bureaucrat &obj);

        //<<overload

        //get anme
        //get grade
        //increment 3 -> 2 (1 is the highest)
        //decrement 3 -> 4 (150 the lowest)
        
        class GradeTooHighException;
        class GradeTooLowException;
};

#endif