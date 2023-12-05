/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:28:24 by houattou          #+#    #+#             */
/*   Updated: 2023/12/05 11:44:24 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<stack>
#include<list>
template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack<T> & other);
        MutantStack &operator=(const MutantStack<T>& other);
        
       typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

#include"MutantStack.tpp"

