/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:05:32 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 16:23:07 by aweaver          ###   ########.fr       */
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
	return (*this);
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

void AMateria::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string const& AMateria::getType(void) const
{
	return (this->type);
}

virtual void use(ICharacter& target)
{
	std::cout << "This is the use function in AMateria and should not be used.
		<< std::endl;
	return ;
}
