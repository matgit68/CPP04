#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;

public:
	Dog(void);
	Dog(const Dog& copy);
	~Dog();

	Dog& operator=(const Dog& ref);

	virtual void makeSound(void) const;
};

#endif