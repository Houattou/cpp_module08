/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:27:22 by houattou          #+#    #+#             */
/*   Updated: 2023/12/01 10:40:05 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if(it != container.end())
        return(it);
    else
        throw NotFindOccurence();
}
