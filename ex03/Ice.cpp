/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:25:34 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 17:56:53 by aweaver          ###   ########.fr       */
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
	this->type = rhs.type;
	return (*this);
}

Ice::Ice(std::string const& type) : AMateria("ice")
{
	return ;
}

void Ice::setType(void)
{
	this->type = "ice";
	return ;
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*"
		<< std::endl;
	return ;
}
