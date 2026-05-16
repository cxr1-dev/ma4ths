/*
 ██████╗██╗  ██╗██████╗  ██╗
██╔════╝╚██╗██╔╝██╔══██╗███║
██║      ╚███╔╝ ██████╔╝╚██║
██║      ██╔██╗ ██╔══██╗ ██║
╚██████╗██╔╝ ██╗██║  ██║ ██║
 ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═╝
*/

#include <iostream>
#include <cstdio>
#include "include/m4ths.h"
using namespace m4ths;

int main() {
	/* Vector Test Meow~ */
	auto v = vec::newv(1, 2);
	auto w = vec::newv(3, 4);

	/* Matrix Test Meow~ */
	auto a = mat::newm<2, 2>(1,2
							,3,4);
	auto b = mat::newm<2, 2>(5,6
							,7,8);

	/* Easter Egg Test Meow~ */
	egg();

	/* ostream Test Meow~ */
	std::cout << "\033[36m";
	printf("[[[VECTOR TEST]]]\n");
	std::cout << v + w << '\n';
	std::cout << v - w << '\n';
	printf("------------------\n");
	std::cout << "\033[34m";
	printf("[[[MATRIX TEST]]]\n");
	std::cout << a + b << '\n';
	std::cout << a - b << "\n";
	printf("------------------\n");
	std::cout << "\033[32m";
	printf("[[[MUITI TEST]]]\n");
	std::cout << vec::num_mul_vec(2, v) << '\n';
	std::cout << mat_mul_vec(a, v) << '\n';
	printf("------------------\n");
	std::cout << "\033[33m";
	printf("[[[CONSTANT TEST]]]\n");
	std::cout << con::e << '\n' << con::pi << '\n';
	std::cout << con::calc::e() << '\n' << con::calc::pi() << '\n';
	printf("------------------\n");
	std::cout << "\033[0m";
	return 0;
}