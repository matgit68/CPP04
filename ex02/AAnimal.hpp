#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
	Brain* brain;

public:
	AAnimal(void);
	AAnimal(const AAnimal& copy);
	~AAnimal();

	AAnimal& operator=(const AAnimal& ref);

	virtual std::string getType() const;
	virtual void makeSound(void) const;
};

#endif