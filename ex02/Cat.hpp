#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
	Brain *brain;

public:
	Cat(void);
	Cat(const Cat& copy);
	~Cat();

	Cat& operator=(const Cat& ref);

	virtual void makeSound(void) const;
};

#endif