/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:28:00 by houattou          #+#    #+#             */
/*   Updated: 2023/12/05 13:08:14 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

int main()
{
    MutantStack<int> mystack;
    int i = 1;
    for(; i < 30; i++)
    {
        mystack.push(i);
     
    }

    std::cout<<"---------------------------------------------------------------------------"<<std::endl;
    std::cout<<"print element of stack : using iterator" << std::endl;
    MutantStack<int>::iterator last= mystack.end();
    for( MutantStack<int>::iterator first = mystack.begin(); first != last; first++)
    {
        std::cout<<*first<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"---------------------------------------------------------------------------"<<std::endl;
    std::cout<<"testing by using list" << std::endl;
    std::list<int> l;
    for(int i =1; i < 30; i++)
    {
        l.push_back(i);
    }

    std::cout<<"---------------------------------------------------------------------------"<<std::endl;
    std::cout<<"print element of list : " << std::endl;
    for(std::list<int>::iterator it = l.begin(); it != l.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
    return(0);
}