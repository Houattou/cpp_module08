/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:39 by houattou          #+#    #+#             */
/*   Updated: 2023/12/01 12:29:39 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

// class Span
// {
//     private:
//         unsigned int *store;
//         unsigned int current_size;
//         unsigned int max_size;
        
        
//     public:
//         Span(){}
//         ~Span()
//         {
            
//         }
//         Span(unsigned int N):current_size(0), max_size(N)
//         {
//             store = new unsigned int[N];
//         }
//         void addNumber(unsigned int n)
//         {
//             if(current_size < max_size)
//             {
//                 store[current_size] = n;
//                 current_size++;
//             }
//             else
//             {
                
//                 std::cout<<"out of range" << std::endl;
//                 return;
//             }
            
//         }
        
    
    
// };

#include <iostream>
#include <stdexcept>
#include <algorithm>

class Span {
private:
    unsigned int maxSize;
    unsigned int currentSize;
    int* data;

public:
    Span(unsigned int N) : maxSize(N), currentSize(0), data(new int[N]) {}

   void addNumber(int num) {
        if (currentSize < maxSize) {
            data[currentSize] = num;
            currentSize++;
          
        } else {
            throw std::out_of_range("Span is full, cannot add more numbers");
           
        }
    }
    void print_data()
    {
        for(unsigned int i=0; i < maxSize; i++)
        {
            std::cout<<data[i] << std::endl;
        }
        
    }

    int get_current()const
    {
        return(this->currentSize);
    }
    unsigned int shortestSpan()
    {
        if(currentSize < 2)
            return(-1);
        std::sort(data, data + currentSize);    
        unsigned int minSpan =data[1] - data[0];     
        for(unsigned int i = 2; i < currentSize; i++)
        {
            unsigned int span = data[i] - data[i - 1];
            if(span < minSpan)
            minSpan = span;
        }
        return(minSpan);      
    }
    unsigned int longestSpan()
    {
        if(currentSize < 2)
            return(-1);
        int min = *std::min_element(data, data+ currentSize);
        int max = *std::max_element(data, data + currentSize);
        return(max - min);
        
    }
    int get_max() const{
        return(this->maxSize);
    }
    ~Span() {
        delete[] data;
    }
};

