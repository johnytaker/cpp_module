/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:14:40 by iugolin           #+#    #+#             */
/*   Updated: 2023/09/18 16:29:18 by iugolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat
{
    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const & other);
        ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & rhs);
        
        std::string getName(void) const;
        int getGrade(void) const;
        
        
        
    protected:
        Bureaucrat();
    private:
        std::string const _name;
        int _grade;
    
};
#endif