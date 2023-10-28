#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type) {
	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& ref) {
	type = ref.type;
	std::cout << "[Animal] Assignment" << std::endl;
	return (*this);
}

std::string Animal::getType() const { return type; }

void Animal::makeSound(void) const { std::cout << "Abstract noise" << std::endl; }
