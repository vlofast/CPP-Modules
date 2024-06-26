/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:02:02 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/23 15:02:03 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
    std::cout << "Default Cons" << std::endl;
    this->Fixpoint = 0;
}

Fixed::Fixed (const Fixed &a){
    std::cout << "Copy Cons" << std::endl;
    *this = a;

}

Fixed   &Fixed::operator = (const Fixed &a){
    std::cout << "Copy Operator" << std::endl;
    if (this != &a)
        this->Fixpoint = a.getRawBits();
    return (*this);
}

Fixed::~Fixed (){
    std::cout << "Destructor" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "Raw Bits" << std::endl;
    return (this->Fixpoint);
}

void    Fixed::setRawBits(const int raw)
{
    std::cout << "Set Raw Bits" << std::endl;
    this->Fixpoint = raw;
}
