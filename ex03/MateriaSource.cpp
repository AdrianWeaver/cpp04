/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:45:36 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 16:20:02 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_stored[i] = NULL;
	std::cout << "Default MateriaSource constructor." << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stored[i])
			delete this->_stored[i];
	}
	std::cout << "Default MateriaSource destructor." << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& source) : IMateriaSource()
{
	if (this != &source)
		*this = source;
	std::cout << "Default MateriaSource constructor." << std::endl;
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._stored[i])
		{
			if (this->_stored[i])
				delete this->_stored[i];
			if (rhs._stored[i] == NULL)
				this->_stored[i] = NULL;
			else
				this->_stored[i] = rhs._stored[i]->clone();
		}
	}
	(void)rhs;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* toLearn)
{
	if (toLearn == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_stored[i] == NULL)
		{
			this->_stored[i] = toLearn;
			return ;
		}
	}
	delete toLearn;
	std::cout << "This magic source is bursting with magic and cannot store any more magic."
		<< std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& toCreate)
{
	for (int i = 0; i < 4 && _stored[i] != NULL; i++)
	{
		if (this->_stored[i]->getType() == toCreate)
			return (this->_stored[i]->clone());
	}
	return (NULL);
}
