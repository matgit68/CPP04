#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "[Cat] Default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal() {
	std::cout << "[Cat] Copy constructor called" << std::endl;
	brain = new Brain();
	*this = copy;
}

Cat::~Cat() {
	std::cout << "[Cat] Destructor called" << std::endl;
	delete(brain);
}

Cat& Cat::operator=(const Cat& ref) {
	std::cout << "[Cat] Assignment" << std::endl;
	type = ref.type;
	delete(brain);
	brain = new Brain(*ref.brain);
	return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meooow" << std::endl; }
