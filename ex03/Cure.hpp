/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:41:59 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 11:08:32 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const& source);
		Cure & operator=(Cure const& rhs);
		~Cure(void);
		Cure(std::string const & type);
		void	setType(void);
		AMateria* clone(void) const;
		void use(ICharacter& target);
	protected:
	private:
};

#endif
