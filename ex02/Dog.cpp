/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:17:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 14:12:15 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default dog constructor." << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Default dog destructor." << std::endl;
	delete this->_brain;
	this->_brain = NULL;
	return ;
}

Dog::Dog(Dog const & source) : Animal()
{
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
		if (this->_brain != NULL)
			delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
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

Brain & Dog::getBrain(void) const
{
	return (*(this->_brain));
}
