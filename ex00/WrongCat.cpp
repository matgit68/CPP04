#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	type = "WrongCat";
	std::cout << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	type = copy.type;
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref) {
	type = ref.type;
	std::cout << "[WrongCat] Assignment" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const { std::cout << "Meooow" << std::endl; }