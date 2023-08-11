/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:29:43 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/08 20:07:04 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
    std::string empty_case_string = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (argc < 2)
    {
        std::cout << empty_case_string << std::endl;
        return (0);
    }
    else
    {
        for (int i = 1; argv[i]; i++)
        {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
			if (i < argc - 1)
				std::cout << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}
