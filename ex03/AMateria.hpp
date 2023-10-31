class ICharacter;

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# define VERBOSE 1
# include "ICharacter.hpp"

class AMateria {
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();

	AMateria& operator=(const AMateria &ref);

	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif