/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:20:44 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/23 16:09:16 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		AMateria* ice = new Ice;
		Character hero;
		ICharacter* enemy = new Character;

		(*enemy).setName("Elena");
		std::cout << "my nemesis is: " << (*enemy).getName() << std::endl;
		hero.equip(ice);
		hero.use(0, *enemy);
		delete enemy;
	}
	{
		AMateria* ice = new Ice;
		AMateria* cure = new Cure;
		IMateriaSource* spellbook = new MateriaSource();
		spellbook->learnMateria(ice);
		spellbook->learnMateria(cure);
		AMateria* learnings;
		learnings = spellbook->createMateria("cure");
		ICharacter* hero = new Character("Staf");
		hero->equip(spellbook->createMateria("ice"));
		hero->equip(learnings);
		hero->use(1, *hero);
		hero->use(0, *hero);
		delete hero;
		delete spellbook;
	}
	return (0);
}
