/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:46:58 by nbodin            #+#    #+#             */
/*   Updated: 2026/02/06 00:26:40 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;
        
    public:
        Bureaucrat(const std::string &name = "", const int &grade = 150);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat operator=(const Bureaucrat &obj);
        
        
        //<<overload

        //get anme
        //get grade
        //increment 3 -> 2 (1 is the highest)
        //decrement 3 -> 4 (150 the lowest)
};

#endif