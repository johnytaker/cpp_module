/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:41:10 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/20 12:14:41 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Fixed.hpp"
#include <iostream>

int main(void)
{
	unsigned int num = 10;
	int frbits = 8;

	int res = num << frbits;

	std::cout << res << std::endl;

	return 0;
}
