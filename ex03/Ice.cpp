#include "Ice.hpp"

Ice::Ice() {
	std::cout << "Ice default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &ref) {
	std::cout << "Ice assignation called" << std::endl;
	type = ref.type;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *tmp = new Ice();
	std::cout << "Ice has been cloned" << std::endl;
	return tmp;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}