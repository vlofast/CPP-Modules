/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:14:46 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/20 14:09:42 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span
{
    std::vector<int> val;
    const unsigned int range;

    public:
        Span();
        Span(unsigned int length);
        Span(const Span&);
        Span& operator=(const Span&);
        ~Span();

        void addNumber(int numb);
        int shortestSpan();
        int longestSpan();

        void createNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);

    class TooManyException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class TooFewException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    
};