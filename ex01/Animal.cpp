#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	brain = new Brain();
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type) {
	brain = new Brain();
	for (int i = 0; i < 100 && !copy.brain->ideas[i].empty(); i++)
		brain.ideas[i] = copy.brain->ideas[i].copy();
	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal::~Animal() {
	delete(brain);
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& ref) {
	type = ref.type;
	brain = new Brain();
	for (int i = 0; i < 100 && !ref.brain->ideas[i].empty(); i++)
		brain.ideas[i] = ref.brain->ideas[i].copy();
	std::cout << "[Animal] Assignment" << std::endl;
	return (*this);
}

std::string Animal::getType() const { return type; }

void Animal::makeSound(void) const { std::cout << "Abstract noise" << std::endl; }
