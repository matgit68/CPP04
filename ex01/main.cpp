#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	Dog basic;
	{
		Dog tmp = basic;
	}
	return 0;
}