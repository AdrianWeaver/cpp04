/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:03 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 16:25:59 by aweaver          ###   ########.fr       */
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
	if (*this != source)
		this = &source;
	return ;
}
