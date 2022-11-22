/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:57:19 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:19:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "animal";
	std::cout << "Default animal constructor." << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Default animal destructor." << std::endl;
	return ;
}

Animal::Animal(Animal const & source)
{
	std::cout << "Copy animal constructor." << std::endl;
	*this = source;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal assigment operator." << std::endl;
	if (this == &rhs)
		return (*this);
	else
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	return ;
}

std::string const& Animal::getType(void) const
{
	return (this->type);
}
