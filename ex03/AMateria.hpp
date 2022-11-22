/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:31:10 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 16:23:13 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		AMateria(void);
		~AMateria(void);
		AMateria(AMateria const& source);
		AMateria & operator=(AMateria const& rhs);
		std::string type;
	public:
		AMateria(std::string const & type);
		void	setType(std::string type);
		std::string const & getType(void) const;	//Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
