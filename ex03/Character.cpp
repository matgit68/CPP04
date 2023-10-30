#include "Character.hpp"

Character::Character() : gLevel(0) {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

Character::Character(const Character &copy) : gLevel(0) {
	std::cout << "Character default constructor called" << std::endl;
	*this = copy;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (slot[i])
			delete(slot[i]);
	for(int i = 0; i < gLevel; i++)
		delete(garbage[i]);
}

Character &Character::operator=(const Character &ref) {
	std::cout << "Character assignation called" << std::endl;
	name = ref.name;
	for (int i = 0; i < 4; i++) {
		delete(slot[i]);
		slot[i] = NULL;
		if (ref.slot[i])
			slot[i] = ref.slot[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const { return name; }

void Character::equip(AMateria* m) {
	int i = -1;
	while (++i < 4) {
		if (!slot[i]) {
			slot[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	// je le reference ou ce putain de truc ?
	garbage[gLevel++] = slot[idx];
	slot[idx] = NULL;
}

void Character::use(int idx, Character& target) {
	slot[idx]->use(target);
}
