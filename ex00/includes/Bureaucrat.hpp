/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:46:58 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 23:30:20 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, const int &grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        
        Bureaucrat  operator=(const Bureaucrat &obj);

        std::string getName() const;
        int         getGrade() const;
        void        increment();
        void        decrement();
        
        class GradeTooHighException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return ("Grade too high!");
                }
        };
        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return ("Grade too low!");
                }
        };
};

std::ostream&   operator<<(std::ostream &os, const Bureaucrat &obj);

#endif