#include "Ice.hpp"

Ice::Ice() {
	if (VERBOSE)
		std::cout << "Ice default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice &copy) {
	if (VERBOSE)
		std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	if (VERBOSE)
		std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &ref) {
	if (VERBOSE)
		std::cout << "Ice assignation called" << std::endl;
	type = ref.type;
	return *this;
}

AMateria *Ice::clone() const {
	AMateria *tmp = new Ice();
	if (VERBOSE)
		std::cout << "Ice has been cloned" << std::endl;
	return tmp;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}