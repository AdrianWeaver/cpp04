/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:41:54 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 17:48:46 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "animal";
	std::cout << "Default animal constructor." << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	this->type = "animal";
	std::cout << "Default animal destructor." << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & source)
{
	std::cout << "Copy animal constructor." << std::endl;
	*this = source;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal assigment operator." << std::endl;
	if (this == &rhs)
		return (*this);
	else
	{
		this->type = rhs.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Weird animal noises." << std::endl;
	return ;
}

std::string const& WrongAnimal::getType(void) const
{
	return (this->type);
}

