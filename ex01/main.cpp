#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << std::endl << meta->getType() << " ";
	meta->makeSound(); //will output the meta sound!
	std::cout << std::endl;
	std::cout << i->getType() << " ";
	i->makeSound(); //will output the dog sound!
	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	std::cout << wmeta->getType() << " ";
	wmeta->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	std::cout << wi->getType() << " ";
	wi->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	delete(meta);
	delete(i);
	delete(j);
	delete(wmeta);
	delete(wi);
	return 0;
}
