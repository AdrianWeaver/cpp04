/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:00:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 13:58:20 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const & source);
		Animal & operator=(Animal const & rhs);
		virtual void	makeSound(void) const;
		virtual std::string const& getType(void) const;
	protected:
		std::string	type;
	private:
};

#endif
