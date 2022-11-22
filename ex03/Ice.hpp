/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:25:39 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 17:38:43 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Ice : AMateria
{
	protected:
		Ice(void);
		~Ice(void);
		Ice(Ice const& source);
		Ice & operator=(Ice const& rhs);
		std::string type;
	public:
		Ice(std::string const & type);
		virtual void	setType(void) const = 0;
		std::string const & getType(void) const;	//Returns the materia type
		Ice* clone(void) const = 0;
		void use(ICharacter& target);
};

#endif
