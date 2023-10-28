#include "Dog.hpp"

Dog::Dog(void) {
	type = "Dog";
	std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal() {
	type = copy.type;
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& ref) {
	type = ref.type;
	std::cout << "[Dog] Assignment" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof !" << std::endl; }
