/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:17:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 16:20:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << "Default dog constructor." << std::endl;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Default dog destructor." << std::endl;
	return ;
}

Dog::Dog(Dog const & source) : Animal()
{
	this->type = "Dog";
	std::cout << "Copy dog constructor." << std::endl;
	*this = source;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assigment operator." << std::endl;
	if (this == &rhs)
		return (*this);
	else
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
	return ;
}

std::string const& Dog::getType(void) const
{
		return (this->type);
}

