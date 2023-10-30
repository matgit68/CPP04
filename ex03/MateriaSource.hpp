#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource &ref);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &ref);
};

#endif