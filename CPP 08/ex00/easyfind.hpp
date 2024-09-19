/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:58:32 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/18 14:37:52 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <algorithm>

template <typename T>
int easyfind(T vect, int x)
{
    typename T::iterator it;
    it = std::find(vect.begin(), vect.end(), x);
    if (it != vect.end())
        return (std::distance(vect.begin(), it));
    else
        return (-1);
}