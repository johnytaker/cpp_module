/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:50:27 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/07 15:32:29 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T const & t) {std::cout << t << std::endl;}

int main(void)
{
	int arr[4] = {1, 2, 3, 4};
	iter(arr, 4, print);

	std::cout << std::endl;

	std::string seasons[4] = {"Winter", "Spring", "Summer", "Autumn"};
	iter(seasons, 4, print);

	return (0);
}


// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get ( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T>
// void print (T const & x ) { std::cout << x << std::endl; return; }

// int main ()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );

// 	return (0);
// }
