#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal& copy);
	virtual ~Animal();

	Animal& operator=(const Animal& ref);

	virtual std::string getType() const;
	virtual void makeSound(void) const;
};

#endif