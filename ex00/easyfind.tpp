/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:14:41 by fmoulin           #+#    #+#             */
/*   Updated: 2026/05/07 16:34:21 by fmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator    easyfind(T& container, int nbr)
{
    typename T::iterator it = std::find(container.begin(), container.end(), nbr);

    if (it == container.end())
        throw std::exception();
    else
        return (it);
}
