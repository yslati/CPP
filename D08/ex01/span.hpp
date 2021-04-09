#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <exception>
#include <vector>



class Span {
	private:
		unsigned int	_n;
		std::vector<int>	_v;
		Span();
		
	public:
		Span(unsigned int n);
		~Span();

		void	addNumber(int n);
		template<template<typename> class T>
		void	addNumber(T<int> begin, T<int> end);
		int		shortestSpan();
		int		longestSpan();

		class CantAddMore: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Can't Add More!";
				}
		};
		class NeedMore: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "I Need More than one element!";
				}
		};
};


#endif