/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:39:41 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/14 15:16:04 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Base
{
public:
        virtual ~Base();
};

Base::~Base()
{
    
}

class A : public Base
{
    
};

class B : public Base
{
    
};

class C : public Base
{
    
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main()
{
    identify(generate());
    identify(*generate());
    return 0;
}

Base * generate(void)
{
    srand(time(0));

    if (!(rand() % 3))
    {
        std::cout << "--- A created ---" << std::endl;
        return (new A);
    }
    if (rand() % 3 == 1)
    {
        std::cout << "--- B created ---" << std::endl;
        return (new B);
    }
    std::cout << "--- C created ---" << std::endl;
    return (new C);
}

void identify(Base* p)
{
    std::cout << "***************" << std::endl;
    if (dynamic_cast<A *>(p))
        std::cout << "The actual type of the object pointed to by p is: A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "The actual type of the object pointed to by p is: B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "The actual type of the object pointed to by p is: C" << std::endl;
    else
        std::cout << "This type does not exist" << std::endl; 
}

void identify(Base& p)
{
    std::cout << "&&&&&&&&&&&&&&&&&" << std::endl;
    try
    {
        A & obj = dynamic_cast<A &>(p);
        (void)obj;
        std::cout << "The actual type of the object pointed to by p is: A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }

    try
    {
        B & obj = dynamic_cast<B &>(p);
        (void)obj;
        std::cout << "The actual type of the object pointed to by p is: B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }

    try
    {
        C & obj = dynamic_cast<C &>(p);
        (void)obj;
        std::cout << "The actual type of the object pointed to by p is: C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }

    std::cout << "This type does not exist" << std::endl; 
}
