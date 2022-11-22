/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:03:59 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:39:16 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const& source);
		Brain & operator=(Brain const & rhs);
		std::string const & getIdeas(int) const;
		void	setIdeas(std::string idea, int cell);
	protected:
	private:
		std::string	_ideas[100];
};

#endif
