#include "Cat.hpp"

Cat::Cat(void) {
	type = "Cat";
	std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) {
	type = copy.type;
	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& ref) {
	type = ref.type;
	std::cout << "[Cat] Assignment" << std::endl;
	return (*this);
}

void Cat::makeSound(void) { std::cout << "Meooow" << std::endl; }
