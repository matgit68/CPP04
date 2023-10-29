#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"

class AMateria {
private:
	AMateria();
protected:

public:
	AMateria(std::string const & type);
	AMateria(const AMateria& copy);
	virtual ~AMateria();

	AMateria& operator=(const AMateria &ref);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif