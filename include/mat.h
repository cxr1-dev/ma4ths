#pragma once
#include "m4ths.h"
#include <iostream>
#include "vec.h"

namespace m4ths::mat {
	template <unsigned short ROW,unsigned short COL>
	struct mat{
		static constexpr unsigned short row = ROW; // 行
		static constexpr unsigned short col = COL; // 列
		double value[row][col] = { 0 }; // 内容
		mat() : value{0} {}
		
		template<typename... Args>
		mat(Args... args) {
			static_assert(sizeof...(args) == ROW * COL, "Wrong matrix size Meow~");
			
			double temp[] = { // 因为直接把二维数组展开能把我看似，所以先展开成一维数组
				static_cast<double>(args)...
			};

			for (unsigned short i = 0; i < ROW; i++) {
				for (unsigned short j = 0; j < COL; j++) {
					value[i][j] = temp[i * COL + j]; // 将二维下标转成一维数组下标
				}
			}
		}
		mat<ROW, COL> operator+(const mat<ROW, COL>& others) { // uk wt i wanna say
			mat<ROW, COL> result;

			for (unsigned short i = 0; i < ROW; i++) {
				for (unsigned short j = 0; j < COL; j++) {
					result.value[i][j] = value[i][j] + others.value[i][j];
				}
			}
			return result;
		}

		mat<ROW, COL> operator-(const mat<ROW, COL>& others) { // 又是这个b减法
			mat<ROW, COL> result;

			for (unsigned short i = 0; i < ROW; i++) {
				for (unsigned short j = 0; j < COL; j++) {
					result.value[i][j] = value[i][j] - others.value[i][j];
				}
			}
			return result;
		}
	};
	template <unsigned short ROW, unsigned short COL>
	std::ostream& operator<<(std::ostream& os, const mat<ROW, COL>& a) { // 重载ostream让它输出mat
		os << "[\n";
		for (size_t i = 0; i < ROW; i++) {
			for (size_t j = 0; j < COL; j++) {
				os << a.value[i][j];
				if (!(j >= COL - 1)) {
					os << " ";
				}
				else if (!(i == ROW) && !(j == COL)) {
					os << "\n";
				}
			}
		}
		os << "]";
		return os;
	}
	template<
		unsigned short ROW,
		unsigned short COL,
		typename... Args>
	static auto newm(Args... args) {
		return mat<ROW, COL>(args...);
	}
}