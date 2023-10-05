/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:55 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/04 18:23:56 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <stdlib.h>


int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "USAGE:  ./serialize [value]" << std::endl;
	Data * data = new Data(atoi(av[1]));

	uintptr_t serialized = Serializer::serialize(data);

	Data * deserialized = Serializer::deserialize(serialized);

	if (deserialized == data)
		std::cout << "Serialization and deserialization completed successfully" << std::endl;
	else
		std::cout << "Serialization and deserialization are failed" << std::endl;

	delete data;

	return (0);
}
