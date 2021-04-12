#include "span.hpp"

Span::Span() {
}

Span::Span(unsigned int n): _n(n) {
	_v.reserve(n);
}

void	Span::addNumber(long n) {
	if (_v.size() < _n)
		_v.push_back(n);
	else
		throw Span::CantAddMore();
}



long		Span::shortestSpan() {
	if (_v.size() < 2)
		throw Span::NeedMore();
	std::vector<long> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	long	sp = tmp.at(1) - tmp.at(0);
	for (size_t i = 1; i < tmp.size() - 1; i++) {
		if ((tmp.at(i + 1) - tmp.at(i)) < sp)
			sp = tmp.at(i + 1) - tmp.at(i);
	}
	return sp;
}
long		Span::longestSpan() {
	if (_v.size() < 2)
		throw Span::NeedMore();
	std::vector<long> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return tmp.at(tmp.size() - 1) - tmp.at(0);
}

Span & Span::operator=(Span const & src) {
	this->_n = src._n;
	this->_v = src._v;
	return *this;
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {
	_v.clear();
}