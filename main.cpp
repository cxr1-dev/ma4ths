#include <iostream>
#include "vec.h"
using namespace m4ths;

int main() {
	auto v = vec::newv(1, 2);
	auto w = vec::newv(3, 4);
	std::cout << v + w << '\n';
	std::cout << v - w << '\n';
	return 0;
}