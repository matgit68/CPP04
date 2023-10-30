#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria {
	private:

	protected:

	public:
		Ice();
		Ice(std::string type);
		Ice(const Ice &copy);
		~Ice();

		Ice& operator=(const Ice &ref);
		AMateria* clone() const;
		void use(ICharacter& target);

};
#endif