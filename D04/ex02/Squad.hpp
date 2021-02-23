#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

typedef struct 		s_list
{
	ISpaceMarine*	sm;
	struct s_list 	*next;
}					t_list;

class Squad: public ISquad {
	private:
		t_list		*_container;
		int			_count;
	public:
		Squad();
		Squad(Squad const & src);
		Squad & operator=(Squad const & src);
		~Squad();

		int				getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		int				push(ISpaceMarine* sm);
		bool			checkIfExist(t_list *_container, ISpaceMarine *sm);
};


#endif