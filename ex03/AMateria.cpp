/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:05:32 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 14:13:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Default constructor AMateria." << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "Default destructor AMateria." << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &source)
{
	*this = source;
	return ;
}

AMateria & AMateria::operator=(AMateria const& rhs)
{
	(void)rhs;
	return (*this);
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria constructor with string paramater" << std::endl;
	this->_type = type;
}

std::string const& AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "This is the use function in AMateria and should not be used."
		<< std::endl;
	return ;
}
