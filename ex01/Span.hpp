/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:14:41 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 16:34:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <list>
# include <algorithm>
# include <climits>

class Span
{
    private:
        std::vector<int> _tab;
        unsigned int    _capacity;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        Span &operator =(const Span &src);
        ~Span();

        void    addNumber(int nbr);
        int     shortestSpan();
        int     longestSpan();
};

#endif