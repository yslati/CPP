#include "Squad.hpp"

Squad::Squad() {
	_container = NULL;
	_count = 0;
	return ;
}

Squad::Squad(Squad const & src) {
	for(int i = 0; i < src.getCount(); i++) {
		push(src.getUnit(i));
	}
	*this = src;
	return ;
}

Squad &		Squad::operator=(Squad const & src) {
	t_list		*tmp = src._container;

	if (this != &src) {
		while (tmp) {
			if (_container == NULL) {
				_container = new(t_list);
				_container->sm = tmp->sm;
				_container->next = NULL;
			}
			else {
				if  (checkIfExist(_container, tmp->sm) == true) {
					delete _container->sm;
					push(tmp->sm);
				}
				else {
					push(tmp->sm);
				}
			}	
			tmp = tmp->next;
		}
		_count = src.getCount();
		*this = src;
	}
	return *this;
}

Squad::~Squad() {
	t_list *tmp;

	tmp = _container;
	while (_container) {
			tmp = _container;
		delete _container->sm;
		_container = _container->next;
		delete tmp;
	}
	return ;
}


int				Squad::getCount() const {
	return _count;
}

ISpaceMarine*	Squad::getUnit(int n) const {
	t_list	*tmp = _container;
	if (n < 0 || n >= _count)
		return NULL;
	while (n && tmp->next)
	{
		--n;
		tmp = tmp->next;
	}
	return tmp->sm;
}

bool	Squad::checkIfExist(t_list *_container, ISpaceMarine *sm)
{
	if (sm == NULL)
		return true;
	else if (_container && _container->sm == sm)
		return true;
	else if (_container)
		return checkIfExist(_container->next, sm);
	return false;
}

int				Squad::push(ISpaceMarine* sm)
{
	t_list 	*tmp = new t_list;
	if (checkIfExist(_container, sm) == false) {
		if (_container == NULL) {
			_container = new t_list;
			_container->sm = sm;
			_container->next = NULL;
			_count = 1;
		}
		else {
			while (_container->next)
			{
				_container = _container->next;
			}
			tmp->sm = sm;
			tmp->next = NULL;
			_container->next = tmp;
			_count++;
		}
	}
	return _count;
}