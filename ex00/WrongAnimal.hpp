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
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& ref);

	std::string getType() const;
	void makeSound(void) const;
};

#endif