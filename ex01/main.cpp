/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houattou <houattou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:32 by houattou          #+#    #+#             */
/*   Updated: 2023/12/05 13:22:01 by houattou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
 int main() 
 {
    try
    {
        Span span(10000);
        std::vector<int> testNumber;
        for(int i = 0; i < 10000; i++)
        {
            testNumber.push_back(i);
        }
     
        span.addNumbers(testNumber.begin(), testNumber.end());

        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}


