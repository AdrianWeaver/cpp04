/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:31:10 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 11:05:53 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	public:
		AMateria(std::string const & type);
		std::string const & getType(void) const;	//Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
	protected:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(AMateria const& source);
		AMateria & operator=(AMateria const& rhs);
		std::string _type;
	private:
};

#endif
