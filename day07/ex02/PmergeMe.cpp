/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:11:47 by fraqioui          #+#    #+#             */
/*   Updated: 2023/10/28 07:53:13 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

PmergeMe::PmergeMe(int N) : numbers(N)
{
    if (N % 2 == 0)
        is_odd = 0;
    else
        is_odd = 1;
}

PmergeMe::~PmergeMe()
{
    
}

void    PmergeMe::saveData(char **av)
{
    std::string keep;
    int         len;

    for (int i(1); i < numbers + 1; i++)
    {
        if (!av[i][0])
            throw "Error\n";
        keep = av[i];
        len = keep.length();
        for (int j(0); i < len; i++)
            if (!isdigit(keep[j]))
                throw "Error\n";
        vc.push_back(std::atoi(av[i]));
        dq.push_back(std::atoi(av[i]));
    }
}

void    PmergeMe::sort()
{
    clock_t vc_b, vc_a, dq_b, dq_a;

    std::cout << "Before: " << vc;
    
    vc_b = clock();
    sort_vector();
    vc_a = clock();

    dq_b = clock();
    sort_deque();
    dq_a = clock();

    std::cout << "After: " << vc;

    std::cout << "Time to process a range of  " << numbers << " elements with std::vector : " << static_cast<double>(vc_a - vc_b) << " us" << std::endl;
    std::cout << "Time to process a range of  " << numbers << " elements with std::deque : " << static_cast<double>(dq_a - dq_b) << " us" << std::endl;
}

void    PmergeMe::sort_vector()
{
    int len;
    std::pair<int, int> keep;

    len = numbers;
    if (is_odd)
    {
        unpaired_n = vc.back();
        len -= 1;
    }
    for (int i(0); i < len; i += 2)
    {
        if (vc[i] <= vc[i + 1])
        {
            keep.first = vc[i];
            keep.second = vc[i + 1];
        }
        else
        {
            keep.first = vc[i + 1];
            keep.second = vc[i];
        }
        vc_pair.push_back(keep);
    }
    int j;
    for (int i(0); i < int(vc_pair.size()); i++)
    {
        keep = vc_pair[i];
        j = i - 1;

        while (j >= 0 && vc_pair[j].second > keep.second)
        {
            vc_pair[j + 1] = vc_pair[j];
            j = j - 1;
        }
        vc_pair[j + 1] = keep;
    }

    vc.clear();
    if (!vc_pair.empty())
        vc.push_back(vc_pair[0].first);
    for (int i(0); i < int(vc_pair.size()); i++)
        vc.push_back(vc_pair[i].second);

    for (int i(1); i < int(vc_pair.size()); i++)
        vc.insert(std::lower_bound(vc.begin(), vc.end(), vc_pair[i].first), vc_pair[i].first);
    
    if (is_odd)
        vc.insert(std::lower_bound(vc.begin(), vc.end(), unpaired_n), unpaired_n);
}

void    PmergeMe::sort_deque()
{
    int len;
    std::pair<int, int> keep;

    len = numbers;
    if (is_odd)
    {
        unpaired_n = dq.back();
        len -= 1;
    }
    for (int i(0); i < len; i += 2)
    {
        if (dq[i] <= dq[i + 1])
        {
            keep.first = dq[i];
            keep.second = dq[i + 1];
        }
        else
        {
            keep.first = dq[i + 1];
            keep.second = dq[i];
        }
        dq_pair.push_back(keep);
    }
    int j;
    for (int i(0); i < int(dq_pair.size()); i++)
    {
        keep = dq_pair[i];
        j = i - 1;

        while (j >= 0 && dq_pair[j].second > keep.second)
        {
            dq_pair[j + 1] = dq_pair[j];
            j = j - 1;
        }
        dq_pair[j + 1] = keep;
    }

    dq.clear();
    if (!dq_pair.empty())
        dq.push_back(dq_pair[0].first);
    for (int i(0); i < int(dq_pair.size()); i++)
        dq.push_back(dq_pair[i].second);

    for (int i(1); i < int(dq_pair.size()); i++)
        dq.insert(std::lower_bound(dq.begin(), dq.end(), dq_pair[i].first), dq_pair[i].first);
    
    if (is_odd)
        dq.insert(std::lower_bound(dq.begin(), dq.end(), unpaired_n), unpaired_n);
}

std::ostream & operator<<(std::ostream & os, const std::vector<int> & vc)
{
    for (int i(0); i < int(vc.size()); i++)
        std::cout << vc[i] << ' ';
    std::cout << std::endl;

    return os;
}
