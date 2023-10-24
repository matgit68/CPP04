#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	const AAnimal* pouet;

	pouet = i;
	std::cout << std::endl << meta->getType() << " ";
	meta->makeSound(); //will output the meta sound!
	std::cout << std::endl;
	std::cout << i->getType() << " ";
	i->makeSound(); //will output the dog sound!
	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	std::cout << pouet->getType() << " ";
	pouet->makeSound(); //will output the cat sound!
	std::cout << std::endl;


	delete(pouet);
	delete(meta);
	delete(i);
	delete(j);

	return 0;
}
