/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:38 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 12:57:58 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "Default ImateriaSource constructor." << std::endl;
	return ;
}

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "Default ImateriaSource destructor." << std::endl;
	return ;
}

IMateriaSource::IMateriaSource(IMateriaSource const& source)
{
	if (this != &source)
		*this = source;
	std::cout << "Default ImateriaSource constructor." << std::endl;
	return ;
}

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & rhs)
{
	(void)rhs;
	return (*this);
}
