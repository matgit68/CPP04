#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:

public:
	WrongCat(void);
	WrongCat(const WrongCat& copy);
	~WrongCat();

	WrongCat& operator=(const WrongCat& ref);

	void makeSound(void) const;
};

#endif