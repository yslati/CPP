#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <exception>
#include <vector>
#include <ctime>



class Span {
	private:
		unsigned int	_n;
		std::vector<long>	_v;
		
	public:
		Span();
		Span(unsigned int n);
		Span(Span const & src);
		Span & operator=(Span const & src);
		~Span();

		void	addNumber(long n);
		template<template<typename> class T>
		void	addNumber(T<long*> begin, T<long*> end) {
			if (end <= begin)
				throw InvalidRange();
			unsigned int s = end - begin;
			if (s > _n)
				throw CantAddMore();
			for (T<long *> it = begin; it != end; it++)
				_v.push_back(*it);
		}
		long		shortestSpan();
		long		longestSpan();

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
		class InvalidRange: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Invalid range!";
				}
		};
};


#endif