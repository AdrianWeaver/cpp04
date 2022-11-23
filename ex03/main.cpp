/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:20:44 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 12:36:34 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	AMateria* ice = new Ice;
	Character hero;
	ICharacter* enemy = new Character;

	(*enemy).setName("Elena");
	std::cout << "my nemesis is: " << (*enemy).getName() << std::endl;
	hero.equip(ice);
	hero.use(0, *enemy);
	return (0);
}
