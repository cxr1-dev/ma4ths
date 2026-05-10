#pragma once
#include "m4ths.h"
#include <iostream>

namespace m4ths::vec{
	struct two_d_vec{
		double x=0;
		double y=0;
	};
	class op {
	public:
		static two_d_vec two_d_vec_add(two_d_vec v,two_d_vec w) {
			two_d_vec u;
			u.x = v.x + w.x;
			u.y = v.y + w.y;
			return u;
		}
		static void print_2d_vec(two_d_vec v) {
			std::cout
				<< "\\begin{bmatrix}" << "\n"
				<< v.x << '\\' << '\\' << "\n"
				<< v.y << "\n"
				<< "\\end{bmatrix}"
				;
		}
		static two_d_vec init_2d_vec(double x, double y) {
			two_d_vec u;
			u.x = x;
			u.y = y;
			return u;
		}
	};
}