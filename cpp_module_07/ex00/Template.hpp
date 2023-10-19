/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:09:32 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/08 14:29:25 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template <typename T>
void swap(T & a, T & b) {T tmp = a; a = b; b = tmp;}

template <typename T>
T const & min(T const & a, T const & b) {return (a <= b) ? a : b;}

template <typename T>
T const & max(T const & a, T const & b) {return (a >= b) ? a : b;}


#endif
