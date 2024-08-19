/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:23:11 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/22 11:30:19 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> check;
    srand(time(NULL));
    for (int i(0); i < 98; i++)
        check.push_back(rand());

    std::vector<int>::iterator it = check.begin();
    std::vector<int>::iterator ite = check.end();

    Span var(100);
    var.addNumber(10);
    var.addNumber(120);
    var.fillNums(it, ite);

    std::cout << "-----------------\n";
    std::cout << var.shortestSpan() << std::endl;
    std::cout << var.longestSpan() << std::endl;

    sp = var;
    std::cout << "-----------------\n";
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
        Span to(4);
        to.addNumber(10);
        to.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        var.addNumber(20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}