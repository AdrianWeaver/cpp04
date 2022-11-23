/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:42:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 11:51:12 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default constructor Cure." << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Default destructor Cure." << std::endl;
	return ;
}

Cure::Cure(Cure const &source) : AMateria("cure")
{
	*this = source;
	return ;
}

Cure & Cure::operator=(Cure const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Cure::Cure(std::string const& type) : AMateria("cure")
{
	(void)type;
	return ;
}

void Cure::setType(void)
{
	this->_type = "cure";
	return ;
}

AMateria* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds. *"
		<< std::endl;
	return ;
}
