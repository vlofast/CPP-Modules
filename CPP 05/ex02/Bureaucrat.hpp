/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:41 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/09 11:01:20 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
        static const int maxGrade = 1;
        static const int minGrade = 150;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat&);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void signForm(AForm& form) const;
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator <<(std::ostream&, const Bureaucrat&);
