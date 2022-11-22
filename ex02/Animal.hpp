/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:00:00 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 12:28:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		virtual ~Animal(void);
		virtual void	makeSound(void) const = 0;
		virtual std::string const& getType(void) const = 0;
	protected:
		Animal(void);
		Animal(Animal const & source);
		Animal & operator=(Animal const & rhs);
		std::string	type;
	private:
};

#endif
