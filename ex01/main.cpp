/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:32 by houattou          #+#    #+#             */
/*   Updated: 2023/12/01 12:35:04 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
// int main()
// {
//     Span sp = Span(100000);
//     for( int = 0; i < 100000; i++)
//     {
//         sp.addNumber(i);
        
//     }
//     // sp.addNumber(6);
//     // sp.addNumber(3);
//     // sp.addNumber(17);
//     // sp.addNumber(9);
//     // sp.addNumber(11);
//     std::cout <<"short  is: " <<sp.shortestSpan()<< std::endl;
//     std::cout <<"max is: " <<sp.longestSpan() << std::endl;
//     // sp.print_data();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
// Replace with the actual header file for your Span class

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Create a Span object
    Span span(std::rand());

    // Generate 10000 random numbers and add them to the Span object
    for (int i = 0; i < 10000; ++i) {
        span.addNumber(std::rand());
    }
    span.print_data();

    // Calculate the longest span
    int longest = span.longestSpan();

    // Print the longest span
    std::cout << "Longest span: " << longest << std::endl;

    return 0;
}
