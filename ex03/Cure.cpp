#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Cure default constructor called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure &copy) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &ref) {
	std::cout << "Cure assignation called" << std::endl;
	type = ref.type;
	return *this;
}

AMateria *Cure::clone() const {
	Cure *tmp = new Cure();
	std::cout << "Cure has been cloned" << std::endl;
	return tmp;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}