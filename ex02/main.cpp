#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << i->getType() << " ";
	i->makeSound(); //will output the dog sound!
	std::cout << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	delete(i);
	delete(j);

	Cat basic;
	Dog b2;
	{
		Cat tmp = basic;
		Dog tmp2;
		tmp2 = b2;
	}

	return 0;
}