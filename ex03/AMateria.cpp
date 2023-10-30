#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &t) : type(t) {
	std::cout << "AMateria " << type << " constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "AMateria copy " << copy.type << " constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {
	std::cout << "AMateria " << type << " destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &ref) {
	std::cout << "AMateria assignation called" << std::endl;
	type = ref.type;
	return *this;
}

const std::string &AMateria::getType() const { return type; }
