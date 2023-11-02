#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Cat basic;
	Dog b2;
	{
		Cat tmp = basic;
		Dog tmp2;
		tmp2 = b2;
	}
	return 0;
}