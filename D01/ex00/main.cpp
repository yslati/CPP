#include "Pony.hpp"

int main() {
	Pony stack;
	Pony *heap = new Pony();

	stack.ponyOnTheStack();

	heap->ponyOnTheHeap();
	delete heap;
	return 0;
}