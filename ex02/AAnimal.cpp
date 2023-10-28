#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal") {
	std::cout << "[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : type(copy.type) {
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "[AAnimal] Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& ref) {
	type = ref.type;
	std::cout << "[AAnimal] Assignment" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const { return type; }

void AAnimal::makeSound(void) const { std::cout << "Abstract noise" << std::endl; }
