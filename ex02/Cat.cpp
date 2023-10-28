#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "[Cat] Default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal() {
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "[Cat] Destructor called" << std::endl;
	delete(brain);
}

Cat& Cat::operator=(const Cat& ref) {
	std::cout << "[Cat] Assignment" << std::endl;
	type = ref.type;
	brain = ref.brain;
	return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meooow" << std::endl; }
