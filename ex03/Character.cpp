/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:55:19 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 16:15:34 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(void) : ICharacter()
{
	std::cout << "Default Character constructor." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	std::cout << "Default Character destructor." << std::endl;
	return ;
}

Character::Character(Character const& source) : ICharacter()
{
	std::cout << "Copy Character constructor." << std::endl;
	*this = source;
	return ;
}

Character & Character::operator=(Character const& rhs)
{
	std::cout << "Character copy assignment." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = NULL;
		(void)rhs;
	}
	return (*this);
}

Character::Character(std::string const& name) : ICharacter()
{
	std::cout << "Character constructor with name as parameter." << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

void	Character::setName(std::string const& name)
{
	this->_name = name;
	return ;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (m == NULL)
		return ;
	int	i;

	i = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
	std::cout << "Character cannot withhold this much magic."
		<< std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_inventory[idx])
		{
			this->_inventory[idx]->use(target);
			return ;
		}
	}
	std::cout << this->_name << " cannot do that." << std::endl;
	return ;
}
