#include "cat.hpp"
#include "dog.hpp"
#include "wrongCat.hpp"
#include "wrongAnimal.hpp"
#include "animal.hpp"

int main()
{
	std::cout << std::endl << "----- Animal Test -----" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound(); // chat
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "----- Wrong Animal Test -----" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;
	return 0;
}