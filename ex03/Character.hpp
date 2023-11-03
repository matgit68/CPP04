#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter{
private:
	std::string name;
	AMateria *slot[4];

public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &copy);
	~Character();

    Character& operator=(const Character &copy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria *getMateria(int i) const;
};

#endif