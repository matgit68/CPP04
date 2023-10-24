#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal& copy);
	virtual ~Animal();

	Animal& operator=(const Animal& ref);

	std::string getType() const;
	virtual void makeSound(void) const;
};

#endif