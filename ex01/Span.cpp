/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:14:41 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 16:34:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _tab(), _capacity(0)
{
}

Span::Span(unsigned int N) : _tab(), _capacity(N)
{
}

Span::Span(const Span &copy) : _tab(copy._tab), _capacity(copy._capacity)
{
}

Span &Span::operator =(const Span &src)
{
    if (this != &src)
    {
        _capacity = src._capacity;
        _tab = src._tab;
    }
    return (*this);
}

void    Span::addNumber(int nbr)
{
    if (_tab.size() >= _capacity)
        throw std::out_of_range("_tab is already full");
    else
        _tab.push_back(nbr);
}

int     Span::shortestSpan()
{
    if (_tab.size() < 2)
        throw std::length_error("not enough elements in the _tab");
    
    std::vector<int>            copy;
    std::vector<int>::iterator  next;
    int                         shortest;
    int                         current;

    copy = _tab;
    std::sort(copy.begin(), copy.end());
    shortest = INT_MAX;
    for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it)
    {
        next = it;
        ++next;
        if (next == copy.end())
            return (shortest);
        current = *next - *it;
        if (current < shortest)
            shortest = current;
    }
    return (shortest);
}

int     Span::longestSpan()
{
    if (_tab.size() < 2)
        throw std::length_error("not enough elements in the _tab");

    std::vector<int>::iterator      min;
    std::vector<int>::iterator      max;
    int                             res;

    min = std::min_element(_tab.begin(), _tab.end());
    max = std::max_element(_tab.begin(), _tab.end());

    res = *max - *min;
    return (res);
}

Span::~Span()
{
}
