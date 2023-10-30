#ifndef Cure_HPP
# define Cure_HPP
# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();

		Cure& operator=(const Cure &ref);

		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif