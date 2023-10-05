/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:47:53 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/04 17:32:12 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>

struct Data
{
	int	data;
	Data(int d) : data(d) {}
};

class Serializer
{
	public:
		static uintptr_t serialize(Data * ptr);
		static Data * deserialize(uintptr_t raw);
	private:
		Serializer(void);
		Serializer(Serializer const & other);
		~Serializer(void);

		Serializer & operator=(Serializer const & rhs);
};
#endif
