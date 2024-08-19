/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:11:49 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/25 18:37:17 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<ctime>

class PmergeMe
{
private:
        std::vector<int>    vc;
        std::deque<int>     dq;

        std::vector< std::pair<int, int> > vc_pair;
        std::deque< std::pair<int, int> > dq_pair;

        bool    is_odd;
        int     unpaired_n;
        int     numbers;

        PmergeMe(const PmergeMe & rhs);
        PmergeMe & operator=(const PmergeMe & rhs);

public:
        PmergeMe(int N);
        ~PmergeMe();

        void    saveData(char **av);
        void    sort();
        void    sort_vector();
        void    sort_deque();
};

std::ostream & operator<<(std::ostream & os, const std::vector<int> & vc);

#endif