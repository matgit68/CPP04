#ifndef Cure_HPP
# define Cure_HPP
# include "AMateria.hpp"

class Cure: public AMateria {
	private:

	protected:

	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();

		Cure& operator=(const Cure &ref);
};
#endif