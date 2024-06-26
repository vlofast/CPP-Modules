/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:02:08 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/23 15:02:12 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int Fixpoint;
        static const int fractionalbit = 8;

    public:
        Fixed ();
        Fixed (const Fixed &a);
        Fixed& operator = (const Fixed &a);
        ~Fixed ();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
