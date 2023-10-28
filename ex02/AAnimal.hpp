#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(const AAnimal& copy);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal& ref);

	virtual std::string getType() const;
	virtual void makeSound(void) const = 0;
};

#endif