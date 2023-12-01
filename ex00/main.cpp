/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:31:37 by houattou          #+#    #+#             */
/*   Updated: 2023/12/01 10:41:10 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

const char*   NotFindOccurence:: what() const throw()
{
    return "easyfind: exception: element not found occurrence";
}

int main()
{
    std::vector<int> number;
     int j = 0;
    for(int i = 0; i < 20; i++)
    {
        j = i * 10;
        number.push_back(j);
    }
    for(std::vector<int>::iterator i = number.begin(), e = number.end(); i != e; i++)
    {
        std::cout << *i<<" ";
    }
    std::cout<<std::endl;
    
    try
    {
        std::vector<int>::iterator result = easyfind(number, 10);
            std::cout << result - number.begin() << std::endl;
            std::cout<<(*result) << std::endl;
      
    }
    catch( NotFindOccurence& e)
    {
           std::cout << e.what() << std::endl;   
    }
}

