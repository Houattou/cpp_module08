/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:35 by houattou          #+#    #+#             */
/*   Updated: 2023/12/03 11:41:07 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Span.hpp"

Span::Span(unsigned int n)
{
    this->N = n;
}
const char* Span::OutOfSize::what() const throw()
{
    return "Span is full, cannot add more numbers";
}
void Span::addNumber(unsigned int num)
{
    
    if(number.size() >= this->N)
        throw OutOfSize();
    number.push_back(num);    
}
int Span::shortestSpan()
{
    if (this->N < 2)
        throw OutOfSize();
    std::sort(number.begin(), number.end());
    unsigned int minSpan = number[1] - number[0];
    for ( unsigned int  i = 1; i < this->N; i++) 
    {
       unsigned int span = number[i] - number[i - 1];
        if (span < minSpan)
            minSpan = span; 
    }
    return minSpan; 
}
int Span:: longestSpan()
{
    if(this->N < 2)
        throw OutOfSize();
    int min = *std::min_element(number.begin(), number.end());
    int max = *std::max_element(number.begin(), number.end());
    return(max - min); 
    
}

