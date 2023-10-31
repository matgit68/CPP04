# include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = ref;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (slot[i])
			delete(slot[i]);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref) {
	for (int i = 0; i < 4; i++) {
		slot[i] = NULL;
		if (ref.slot[i])
			slot[i] = ref.slot[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (!materia)
		return ;
	int i = -1;
	while(++i < 4) {
		if (!slot[i]) {
			slot[i] = materia->clone();
			std::cout << "Learnt new Materia : " << materia->getType() << std::endl;
			delete(materia);
			return ;
		}
	}
	std::cout << "Couldn't learn any new Materia (slots are full)" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (slot[i] && slot[i]->getType() == type)
			return (slot[i]);
	}
	std::cout << "Couldn't find any Materia of this type" << std::endl;
	return NULL;
}
