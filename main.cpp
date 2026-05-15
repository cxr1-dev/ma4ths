#include <iostream>
#include "vec.h"
#include "const.h"
using namespace m4ths;

int main() {
	auto v = vec::newv(1, 2);
	auto w = vec::newv(3, 4);
	std::cout << v + w << '\n';
	std::cout << v - w << '\n';
	std::cout << con::e << '\n' << con::pi << '\n';
	std::cout << con::calc::e() << '\n' << con::calc::pi();
	return 0;
}