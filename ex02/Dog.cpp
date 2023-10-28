#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "[Dog] Default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : AAnimal() {
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor called" << std::endl;
	delete(brain);
}

Dog& Dog::operator=(const Dog& ref) {
	std::cout << "[Dog] Assignment" << std::endl;
	type = ref.type;
	brain = ref.brain;
	return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof !" << std::endl; }
