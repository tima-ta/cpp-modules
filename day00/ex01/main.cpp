/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:09:17 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/14 11:38:26 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

struct Data
{
    int x;
    int y;
};

class Serialization
{
private:
        Serialization();
        Serialization(const Serialization & rhs);
        Serialization & operator=(const Serialization & rhs);
        ~Serialization();

public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

uintptr_t Serialization::serialize(Data* ptr)
{
        uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);

        return (ret);
}

Data*   Serialization::deserialize(uintptr_t raw)
{
        Data *ret = reinterpret_cast<Data *>(raw);

        return (ret);
}

int main(void)
{
        Data obj;

        obj.x = 20;

        uintptr_t var = Serialization::serialize(&obj);
        std::cout << "Before\nAddress of data: " << &obj << "\nx: " << obj.x << std::endl;

        Data * data = Serialization::deserialize(var);
        std::cout << "\nAfter\nAddress of data: " << data << "\nx: " << data->x << std::endl;
}
