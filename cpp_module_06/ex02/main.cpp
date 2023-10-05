/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:50:16 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/05 13:56:35 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "functions.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		Base * object = generate();
		identify(object);
		delete object;
	}
	std::cout << std::endl;
	
	Base * object = generate();
	identify(*object);
	delete object;
	
	return (0);
}
