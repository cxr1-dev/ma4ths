#include "vec.h"
#include "const.h"
#include <iostream>
using namespace m4ths::vec;
int main() {
	two_d_vec v, w;
	v = op::init_2d_vec(1, 2);
	w = op::init_2d_vec(2, 0);

	op::print_2d_vec(
		op::two_d_vec_add(v,w)
	);
	std::cout << pi << '\n' << e;
	return 0;
}