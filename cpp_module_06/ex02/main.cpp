/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:50:16 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/04 22:27:53 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "functions.hpp"
#include <ctime>
#include <cstdlib>

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		Base * object = generate();
		identify(object);
		identify(*object);

		delete object;
	}
	return (0);
}
