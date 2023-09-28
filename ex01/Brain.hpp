#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
#include <iostream>

class Brain{

	private :
		std::string ideas[100];

	public :
		Brain(void);
		Brain(const Brain& copy);
		~Brain(void);

		Brain& operator=(const Brain& ref);

		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

#endif