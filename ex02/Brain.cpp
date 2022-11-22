/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:39:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default brain constructor." << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Default brain destructor." << std::endl;
	return ;
}

Brain::Brain(Brain const & source)
{
	std::cout << "Brain copy constructor." << std::endl;
	if (this != &source)
		*this = source;
	return ;
}

Brain & Brain::operator=(Brain const& rhs)
{
	std::cout << "Brain assignment operator." << std::endl;
	if (this == &rhs)
		return (*this);
	else
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string const & Brain::getIdeas(int cell) const
{
	if (cell >= 0 && cell < 100)
		return (this->_ideas[cell]);
	return (this->_ideas[0]);
}

void	Brain::setIdeas(std::string idea, int cell)
{
	if (cell >= 0 && cell < 100)
		this->_ideas[cell] = idea;
	return ;
}
