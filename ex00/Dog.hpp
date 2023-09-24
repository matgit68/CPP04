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

	virtual std::string getType();
	virtual void makeSound(void);
};

#endif