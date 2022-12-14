/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:17:01 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:43:11 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog(void);
		Dog(Dog const & source);
		Dog & operator=(Dog const & rhs);
		void	makeSound(void) const;
		std::string const& getType(void) const;
		Brain & getBrain(void) const;
	protected:
	private:
		Brain *_brain;
};

#endif
