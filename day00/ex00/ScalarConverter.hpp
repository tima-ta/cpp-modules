/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:41:07 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/13 10:00:46 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter & rhs);
        ScalarConverter & operator=(const ScalarConverter & rhs);
        ~ScalarConverter();

public:
        static void convert(std::string ltrl);

};

typedef void (*print_func)(std::string s);

#endif