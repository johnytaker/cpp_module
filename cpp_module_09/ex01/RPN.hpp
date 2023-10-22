/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:21:13 by iugolin           #+#    #+#             */
/*   Updated: 2023/10/22 10:29:30 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>

class RPN
{
	public:
		RPN(void);
		RPN(RPN const & other);
		~RPN(void);

		RPN & operator=(RPN const & rhs);

		void reversePolishNotation(std::string const & expression);
		bool isOperator(char c);
		void calculate(int num1, int num2, char op);

		int getResult(void) const;

		// class InsufficientOperandsException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
		// class InvalidTokenException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
		// class TooManyOperandsException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
		// class DivisionByZeroException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
	private:
		std::stack<int>_stack;
		int _result;
};

std::ostream &	operator<<(std::ostream & os, RPN const & i);

#endif
