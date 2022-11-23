/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:22:43 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 12:23:43 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "Default ICharacter constructor." << std::endl;
	return ;
}

ICharacter::~ICharacter(void)
{
	std::cout << "Default ICharacter destructor." << std::endl;
	return ;
}

ICharacter::ICharacter(ICharacter const& source)
{
	std::cout << "Copy ICharacter constructor." << std::endl;
	*this = source;
	return ;
}

ICharacter & ICharacter::operator=(ICharacter const& rhs)
{
	std::cout << "ICharacter copy assignment." << std::endl;
	if (this != &rhs)
		(void)rhs;
	return (*this);
}
