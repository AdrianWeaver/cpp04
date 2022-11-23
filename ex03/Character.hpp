/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:53:59 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 13:01:02 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria;
class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const& source);
		Character & operator=(Character const& rhs);
		Character(std::string const& name);
		~Character();
		void setName(std::string const &name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	protected:
	private:
		AMateria*	_inventory[4];
		std::string _name;
};

# include "AMateria.hpp"
#endif
