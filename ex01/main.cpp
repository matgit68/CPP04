#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal pouet;

	std::cout << std::endl << meta->getType() << " ";
	meta->makeSound(); //will output the meta sound!
	std::cout << std::endl;
	std::cout << i->getType() << " ";
	i->makeSound(); //will output the dog sound!
	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	std::cout << pouet.getType() << " ";
	pouet.makeSound(); //will output the meta sound!
	std::cout << std::endl;

	delete(meta);
	delete(i);
	delete(j);

	return 0;
}