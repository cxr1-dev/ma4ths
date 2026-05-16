![repo](https://img.shields.io/badge/cxr1--dev-m4ths-blue?logo=github)
![lang](https://img.shields.io/badge/By-C++-green?logo=cplusplus)
# m4ths——A linear algebra calculation lib by C++
Author: Cxr1  
Latest Update：2026.5.16 UTC+8:00
## Features
- Matrix`m4ths::mat`
- Vector`m4ths::vec`
- Constant`m4ths::con`
## `m4ths::mat`
### 1.`struct mat`
```cpp
template <unsigned short ROW,unsigned short COL>
struct mat{
	static constexpr unsigned short row = ROW;
	static constexpr unsigned short col = COL;
	double value[row][col] = { 0 };
};
```
### 2.`static auto newm()`
```cpp
static auto newm(Args... args) {
	return mat<ROW, COL>(args...);
}
```
## `m4ths::vec`
### 1.`struct vec`
```cpp
template <unsigned short D>
struct vec {
	static constexpr unsigned short d = D;
	double value[d] = { 0 };
};
```
### 2.`static auto newv()`
```cpp
template<typename... Args>
static auto newv(Args...args) {
	vec<sizeof...(args)>v(args...);
	return v;
}
```
## `m4ths::con`
None I wanna say, see code plz.