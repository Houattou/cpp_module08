/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:39 by houattou          #+#    #+#             */
/*   Updated: 2023/12/03 11:53:21 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<vector>
#include <stdexcept>
#include <algorithm>


class Span 
{
    private:
        unsigned int N;
        std::vector <int>number;
    public:
        Span(unsigned int n );
        void    addNumber(unsigned int num);
        int shortestSpan();
        int longestSpan();
        template <typename InputIteraror>
        void addNumbers(InputIteraror first, InputIteraror last)
        {
            while(first != last)
                addNumber(*first);
                ++first;
        }
      

        class OutOfSize : public std::exception
        {
            public:
                const char *what() const throw();
        };
     
};

