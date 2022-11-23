/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:40:37 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 12:54:50 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>

class AMateria;
class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void);
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
	protected:
		IMateriaSource(void);
		IMateriaSource(IMateriaSource const& source);
		IMateriaSource & operator=(IMateriaSource const & rhs);
	private:
};

# include "AMateria.hpp"

#endif
