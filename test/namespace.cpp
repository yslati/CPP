// ************************************************************************** //
//                                                                            //
//                test.cpp for just for test                                  //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "yslati" McLane <bm@gbu.com>                 //
//                                                                            //
// ************************************************************************** //

#include <stdio.h>

int		gl_val = 1;
int		f( void ) {
	return 2;
}

namespace	Foo {
	int gl_val = 3;
	int f(void) {
		return 4;
	}
}
namespace	Bar {
	int	gl_val = 5;
	int f(void) {
		return 6;
	}
}

namespace	Muf = Bar;

int		main(void)
{
	printf("gl_val:			[%d]\n", gl_val);
	printf("f():			[%d]\n\n", f());

	printf("Foo::gl_val:		[%d]\n", Foo::gl_val);
	printf("Foo::f():		[%d]\n\n", Foo::f());

	printf("Bar::gl_val:		[%d]\n", Bar::gl_val);
	printf("Bar::f():		[%d]\n\n", Bar::f());

	printf("Muf::gl_val:		[%d]\n", Muf::gl_val);
	printf("Muf::f():		[%d]\n\n", Muf::f());

	printf("::gl_val:		[%d]\n", ::gl_val);
	printf("::f():			[%d]\n\n", ::f());

	return 0;
}
