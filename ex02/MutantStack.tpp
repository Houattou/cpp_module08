/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:28:27 by houattou          #+#    #+#             */
/*   Updated: 2023/12/05 10:58:24 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
    // std::cout << "MutantStack default constructor called" << std::endl;
}
template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout<<"MutantStack destructor called" << std::endl;
}
template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & other)
{
    *this = other;
    // std::cout<<"MutantStack copy constructor called" << std::endl;
}
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
    if(this != &other)
    {
        std::stack<T>::operator=(other);
    }
   return(*this);

}
template<typename T>

typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}