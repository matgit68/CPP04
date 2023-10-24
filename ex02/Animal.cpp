#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal") {
	brain = new Brain();
	std::cout << "[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : type(copy.type) {
	brain = new Brain();
	for (int i = 0; i < 100 && !copy.brain->getIdea(i).empty(); i++)
		brain->setIdea(i, copy.brain->getIdea(i));
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	delete(brain);
	std::cout << "[AAnimal] Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& ref) {
	type = ref.type;
	brain = new Brain();
	for (int i = 0; i < 100 && !ref.brain->getIdea(i).empty(); i++)
		brain->setIdea(i, ref.brain->getIdea(i));
	std::cout << "[AAnimal] Assignment" << std::endl;
	return (*this);
}

std::string AAnimal::getType() const { return type; }

void AAnimal::makeSound(void) const { std::cout << "Abstract noise" << std::endl; }
