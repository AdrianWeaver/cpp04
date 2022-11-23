/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:25:39 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 14:15:55 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(Ice const& source);
		Ice & operator=(Ice const& rhs);
		Ice(std::string const & type);
		void	setType(void);
		AMateria* clone(void) const;
		void use(ICharacter& target);
	protected:
	private:
};

#endif
