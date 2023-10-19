/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:21:53 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/18 15:23:04 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T const & cont, int value)
{
	typename T::const_iterator it = std::find(cont.begin(), cont.end(), value);
	if (it == cont.end())
		throw std::out_of_range("element not found");
	return it;
}


#endif
