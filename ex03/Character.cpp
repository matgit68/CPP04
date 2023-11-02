#include "Character.hpp"

Character::Character() : name("") {
	if (VERBOSE)
		std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const std::string &n) : name(n) {
	if (VERBOSE)
		std::cout << "Character default constructor called : " << name << std::endl;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const Character &copy) {
	if (VERBOSE)
		std::cout << "Character default constructor called" << std::endl;
	*this = copy;
}

Character::~Character() {
	if (VERBOSE)
		std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &ref) {
	if (VERBOSE)
		std::cout << "Character assignation called" << std::endl;
	name = ref.name;
	for (int i = 0; i < 4; i++) {
		slot[i] = NULL;
		if (ref.slot[i])
			slot[i] = ref.slot[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const { return name; }

void Character::equip(AMateria* m) {
	for(int i = 0; i < 4 ; i++) {
		if (!slot[i]) {
			slot[i] = m;
			if (VERBOSE)
				std::cout << name << " equiped " << m->getType() << " (on slot " << i << ")" << std::endl;
			return ;
		}
	}
	if (VERBOSE)
		std::cout << "Couldn't equip " << m->getType() << " : slots are full" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || !slot[idx]) {
		if (VERBOSE)
			std::cout << "Couldn't unequip slot " << idx << std::endl;
		return;
	}
	if (VERBOSE)
		std::cout << name << " unequiped " << slot[idx]->getType() << " (on slot " << idx << ")" << std::endl;
	slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3 && slot[idx])
		slot[idx]->use(target);
	else
		std::cout << "No Materia in slot " << idx << std::endl;
}
