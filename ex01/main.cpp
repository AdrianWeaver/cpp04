/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:24:40 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/22 11:49:33 by aweaver          ###   ########.fr       */
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
	// now using new[] it cannot be done using polymorphic classes
	{
		Dog *dogs;
		dogs = new Dog[10];
		for (int i = 0; i < 10; i++)
			dogs[i].makeSound();
		delete[] dogs;
	}
	// proving deep copies for dogs
	{
		Dog doggy;
		doggy.getBrain().setIdeas("food!", 0);
		Dog didi(doggy);
		didi.getBrain().setIdeas("play!", 0);
		std::cout << "Doggy ideas:" << doggy.getBrain().getIdeas(0) << std::endl;
		std::cout << "Didi ideas:" << didi.getBrain().getIdeas(0) << std::endl;
	}
	// proving deep copies for cats
	{
		Cat kitty;
		kitty.getBrain().setIdeas("food!", 0);
		Cat kitten(kitty);
		kitten.getBrain().setIdeas("play!", 0);
		std::cout << "Kitty ideas:" << kitty.getBrain().getIdeas(0) << std::endl;
		std::cout << "Kitten ideas:" << kitten.getBrain().getIdeas(0) << std::endl;
	}
	return (0);
}
