#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "[Dog] Default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal() {
	std::cout << "[Dog] Copy constructor called" << std::endl;
	brain = new Brain();
	*this = copy;
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor called" << std::endl;
	delete(brain);
}

Dog& Dog::operator=(const Dog& ref) {
	std::cout << "[Dog] Assignment" << std::endl;
	type = ref.type;
	delete(brain);
	brain = new Brain(*ref.brain);
	return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof !" << std::endl; }
