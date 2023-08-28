/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:50:01 by iugolin           #+#    #+#             */
/*   Updated: 2023/08/24 13:16:29 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int usage(const char *programName)
{
	std::cerr << "Wrong number of arguments!" << std::endl
		<< "USAGE: " << programName << " [filename] [string_to_replace] [new_string]" << std::endl;
	return (1);
}

void readAndReplace(const std::string& inputFile, const std::string& s1, const std::string& s2)
	{
		std::ifstream ifs(inputFile);
		if (!ifs.is_open())
		{
			std::cerr << "Could not open input file" << std::endl;
			return;
		}

		std::string outputFile = inputFile + ".replace";
		std::ofstream ofs(outputFile);
		if (!ofs.is_open())
		{
			std::cerr << "Could not create output file" << std::endl;
			return;
		}

		std::string line;
		while (getline(ifs, line))
		{
			size_t pos = 0;
			size_t foundPos;

			while ((foundPos = line.find(s1, pos)) != std::string::npos)
			{
				ofs << line.substr(pos, foundPos - pos) << s2;
				pos = foundPos + s1.length();
			}
			ofs << line.substr(pos) << std::endl;
		}
		ifs.close();
		ofs.close();
	}

int main(int argc, char **av)
{
	if (argc != 4)
		return (usage(av[0]));

	std::string inputFile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	readAndReplace(inputFile, s1, s2);
	return (0);
}
