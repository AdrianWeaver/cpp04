/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:22:10 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:49:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & source);
		Cat & operator=(Cat const & rhs);
		void makeSound(void) const;
		std::string const& getType(void) const;
		Brain & getBrain(void) const;
	protected:
	private:
		Brain *_brain;
};

#endif
