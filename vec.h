#pragma once
#include "m4ths.h"
#include <iostream>

namespace m4ths::vec{
	template <unsigned short D>
	struct vec {
		static constexpr unsigned short d = D; // 向量维数
		double value[d] = { 0 }; // 向量数据

		vec() : value{ 0 } {}

		template <typename... Args>
		vec(Args... args)
			: value{ static_cast<double>(args)... } {
			static_assert(sizeof...(args) == d, "Not enough parameters Meow~");
		}

		vec<D> operator+(const vec<D>& others) { // 重载加法
			vec<D> result;

			for (unsigned short i = 0; i < D; i++) {
				result.value[i] = value[i] + others.value[i];
			}

			return result;
		}

		vec<D> operator-(const vec<D>& others) { // 就tm改个符号我得重新写一遍😡
			vec<D> result;

			for (unsigned short i = 0; i < D; i++) {
				result.value[i] = value[i] - others.value[i];
			}

			return result;
		}
	};

	template <unsigned short D>
	std::ostream& operator<<(std::ostream& os, const vec<D>& v) { // 重载输出让它能输出vec
		os << "[";
		for (size_t i = 0; i < D; i++) {
			os << v.value[i];

			if (!(i >= D - 1)) { // 为了让这个傻逼函数不多输出一个逗号
				os << ",";
			}
		}
		os << "]";
		return os;
	}

	template<typename... Args>
	static auto newv(Args...args) { // 通过动态参数数量实现对vec的赋值
		vec<sizeof...(args)>v(args...);
		return v;
	}
	
}