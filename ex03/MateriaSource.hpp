/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:44:43 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 14:22:45 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		~MateriaSource(void);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	protected:
		MateriaSource(void);
		MateriaSource(MateriaSource const& source);
		MateriaSource & operator=(MateriaSource const & rhs);
	private:
		AMateria*	_stored[4];
};


#endif
