#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type) {
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref) {
	type = ref.type;
	std::cout << "[WrongAnimal] Assignment" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound(void) const { std::cout << "Abstract wrong noise" << std::endl; }
