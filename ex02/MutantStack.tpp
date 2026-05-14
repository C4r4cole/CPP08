/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:14:41 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 16:34:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &cpy) : std::stack<T>(cpy)
{
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator =(const MutantStack<T> &src)
{
    if (this != &src)
    {
        std::stack<T>::operator=(src);
    }
    return (*this);
}

template<typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end()
{
    return (this->c.end());
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}
