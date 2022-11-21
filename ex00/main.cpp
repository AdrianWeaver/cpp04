/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:24:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/21 15:05:08 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	//using dogs and cats as such instead of going through animals.
	Dog titi;
	Cat tata;

	tata.makeSound();
	titi.makeSound();
	// now using new[] instead of new
	{
		Animal *dogs;

		dogs = new Dog[10];
		for (int i = 0; i < 10; i++)
			dogs[i].makeSound();
		delete[] dogs;
	}
}
