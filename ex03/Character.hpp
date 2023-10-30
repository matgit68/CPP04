#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter{
private:
	std::string name;
	AMateria *slot[4];
	AMateria *garbage[1000];
	int	gLevel;

public:
    Character(void);
    Character(std::string name);
    Character(const Character &copy);
	~Character();

    Character& operator=(const Character &copy);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);
};

#endif