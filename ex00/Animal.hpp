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
	~Animal();

	Animal& operator=(const Animal& ref);

	virtual std::string getType();
	virtual void makeSound(void);
};

#endif