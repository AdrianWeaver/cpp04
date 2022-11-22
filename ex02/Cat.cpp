/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:22:34 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 14:12:00 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default cat constructor." << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Default cat destructor." << std::endl;
	delete this->_brain;
	this->_brain = NULL;
	return ;
}

Cat::Cat(Cat const & source) : Animal()
{
	std::cout << "Copy cat constructor." << std::endl;
	*this = source;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assigment operator." << std::endl;
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

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return ;
}

std::string const& Cat::getType(void) const
{
	return (this->type);
}

Brain & Cat::getBrain(void) const
{
	return (*(this->_brain));
}
