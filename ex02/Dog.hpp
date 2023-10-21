#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
protected:

public:
	Dog(void);
	Dog(const Dog& copy);
	~Dog();

	Dog& operator=(const Dog& ref);

	virtual void makeSound(void) const;
};

#endif