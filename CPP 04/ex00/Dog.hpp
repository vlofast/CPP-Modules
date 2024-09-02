/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:11 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:14 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog  : public Animal {
  
    public:
        Dog();
        Dog(const Dog& val);
        Dog& operator=(const Dog& val);
        ~Dog();

        void makeSound() const;
};

#endif