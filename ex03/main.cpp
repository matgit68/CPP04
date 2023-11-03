#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	{
		std::cout << "---------------------------" << std::endl;
		Character *toto = new Character(*me);
		AMateria *del = toto->getMateria(3);
		toto->unequip(3);
		toto->use(3, *bob);
		toto->use(0, *bob);
		delete(toto->getMateria(0));
		delete(toto->getMateria(1));
		delete(toto->getMateria(2));
		delete(toto->getMateria(3));
		delete(del);
		delete(toto);
		std::cout << "---------------------------" << std::endl;
	}
	me->use(3, *bob);
	std::cout << "---------------------------" << std::endl;
	me->unequip(0);
	me->unequip(3);
	me->unequip(1);
	me->unequip(17);
	me->unequip(0);
	me->use(3, *bob);
	me->equip(tmp);
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}