/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:26 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/26 18:29:34 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"

int main(void)
{
    Animal** obj = new Animal*[6];

    for (int i = 0; i < 3; i++)
        obj[i] = new Cat();
    for (int i = 3; i < 6; i++)
        obj[i] = new Dog();
    for (int i = 0; i < 6; i++)
        delete obj[i];   
    delete [] obj;
    return 0;
}
