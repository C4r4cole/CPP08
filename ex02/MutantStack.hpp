/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:14:41 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 16:34:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stdexcept>
# include <stack>
# include <list>
# include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    MutantStack();
    MutantStack(const MutantStack &cpy);
    MutantStack &operator =(const MutantStack &src);
    ~MutantStack();

    iterator    begin();
    iterator    end();
};

# include "MutantStack.tpp"


#endif