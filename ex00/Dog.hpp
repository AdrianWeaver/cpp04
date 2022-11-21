/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:17:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 15:02:31 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & source);
		Dog & operator=(Dog const & rhs);
		void	makeSound(void) const;
		std::string const& getType(void) const;
	protected:
	private:
};

#endif
