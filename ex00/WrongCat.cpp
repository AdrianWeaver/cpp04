/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:41:57 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 18:47:29 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Default cat constructor." << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default cat destructor." << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & source) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Copy cat constructor." << std::endl;
	*this = source;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assigment operator." << std::endl;
	if (this == &rhs)
		return (*this);
	else
		this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Squeeeeeeek!" << std::endl;
	return ;
}

std::string const& WrongCat::getType(void) const
{
	return (this->type);
}

