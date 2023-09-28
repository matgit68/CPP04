#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& copy);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& ref);

	virtual std::string getType() const;
	virtual void makeSound(void) const;
};

#endif