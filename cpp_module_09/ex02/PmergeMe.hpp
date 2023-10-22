/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:30:18 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/22 00:34:54 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <sys/time.h>
# include <vector>
# include <deque>
# include <set>


class PmergeMe
{
	public:
		PmergeMe(int ac, char **av);
		PmergeMe(PmergeMe const & other);
		~PmergeMe(void);

		double	getVectorDeltaTime(void) const;
		double	getDequeDeltaTime(void) const;

		PmergeMe &	operator=(PmergeMe const & rhs);

		class InvalidArgumentException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class DuplicatesException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class ContainerTypeException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		int					_size;
		bool				_sorted;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		double				_deltaTimeVector;
		double				_deltaTimeDeque;

		std::vector<int>	_parseArgsVector(int ac, char **av);
		std::deque<int>		_parseArgsDeque(int ac, char **av);

		void				_verifyDuplicates(void);

		void				_printBeforeAfter(void);
		void				_printTime(std::string vectorDeque) const;

		template <typename T>
		void				_mergeInsertSort(T & container);

		double				_getTime(void);
		double				_deltaTime(long long time);

		PmergeMe(void);
};

std::ostream &	operator<<(std::ostream & os, PmergeMe const & i);

#endif
