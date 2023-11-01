#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "A Brain has been created with standard constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "A Brain has been created with copy constructor" << std::endl;
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "A Brain has been destructed" << std::endl;
}

Brain& Brain::operator=(const Brain& ref) {
	for(int i = 0; i < 100; i++)
		ideas[i] = ref.ideas[i];
	std::cout << "A Brain has been assigned" << std::endl;
	return (*this);
}

std::string Brain::getIdea(int i) const { return ideas[i]; }

void Brain::setIdea(int i, std::string idea) { ideas[i] = idea; }
