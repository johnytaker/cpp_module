/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:55 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/05 12:38:59 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <stdlib.h>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "USAGE:  ./serialize [int_value]" << std::endl;
		return (1);
	}
	Data * data = new Data(atoi(av[1]));

	uintptr_t serialized = Serializer::serialize(data);

	Data * deserialized = Serializer::deserialize(serialized);

	if (deserialized == data)
		std::cout << "Serialization and deserialization completed successfully" << std::endl;
	
	std::cout << "Deserialized data value: " << deserialized->data << std::endl;
	
	delete data;

	return (0);
}
