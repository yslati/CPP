#include "span.hpp"

Span::Span() {
}

Span::Span(unsigned int n): _n(n) {
	_v.reserve(n);
}

void	Span::addNumber(int n) {
	if (_v.size() < _n)
		_v.push_back(n);
	else
		throw Span::CantAddMore();
}

template<template<typename> class T>
void	Span::addNumber(T<int> begin, T<int> end) {
	_n = static_cast<int>(end);	
	for (T<int> i = begin; i != end; i++) {
		_v.push_back(*i);
	}
}

int		Span::shortestSpan() {
	if (_v.size() < 2)
		throw Span::NeedMore();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int	sp = tmp.at(1) - tmp.at(0);
	for (size_t i = 1; i < tmp.size() - 1; i++) {
		if ((tmp.at(i + 1) - tmp.at(i)) < sp)
			sp = tmp.at(i + 1) - tmp.at(i);
	}
	return sp;
}

int		Span::longestSpan() {
	if (_v.size() < 2)
		throw Span::NeedMore();
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	return tmp.at(tmp.size() - 1) - tmp.at(0);
}

Span::~Span() {
	_v.clear();
}