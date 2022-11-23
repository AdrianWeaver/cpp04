/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:25:34 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 14:16:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default constructor Ice." << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Default destructor Ice." << std::endl;
	return ;
}

Ice::Ice(Ice const &source) : AMateria("ice")
{
	*this = source;
	return ;
}

Ice & Ice::operator=(Ice const& rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Ice::Ice(std::string const& type) : AMateria("ice")
{
	(void)type;
	return ;
}

AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::setType(void)
{
	this->_type = "ice";
	return ;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*"
		<< std::endl;
	return ;
}
