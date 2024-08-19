/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:45:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/22 11:47:11 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    std::cout << "stack output" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::list<int> test;

    test.push_back(5);
    test.push_back(3);
    test.push_back(5);
    test.push_back(737);
    test.push_back(0);

    std::list<int>::iterator it0 = test.begin();
    std::list<int>::iterator ite0 = test.end();
    
    ++it0;
    --it0;
    std::cout << "list output" << std::endl;
    while (it0 != ite0)
    {
        std::cout << *it0 << std::endl;
        ++it0;
    }

    MutantStack<float> check;

    check.push(3.4f);
    check.push(0.8f);
    check.push(5.99f);

    check.pop();

    MutantStack<float>::iterator it1 = check.begin();
    MutantStack<float>::iterator ite1 = check.end();
    
    std::cout << "New stack output" << std::endl;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    return 0;
}
