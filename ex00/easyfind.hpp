/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:31:33 by houattou          #+#    #+#             */
/*   Updated: 2023/12/01 10:40:14 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

class NotFindOccurence: public std::exception
{
public:
    virtual const char* what() const throw();
};

template<typename T>
typename T::iterator easyfind(T& container, int value);
#include"easyfind.tpp"