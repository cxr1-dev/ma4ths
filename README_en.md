|[简体中文](./README.md)|[English](./README_en.md)|  
![repo](https://img.shields.io/badge/cxr1--dev-m4ths-blue?logo=github)
![lang](https://img.shields.io/badge/By-C++-green?logo=cplusplus)
> This file is translated by Deepseek.
# m4ths——A C++ Linear Algebra Computation Library
Author: Cxr1  
Last updated: 2026.5.16 UTC+8:00
## Main Features
- Matrix `m4ths::mat`
- Vector `m4ths::vec`
- Constants `m4ths::con`
## `m4ths`
### 1.`egg()`
An Easter egg~, go check it out yourself.
### 2.`vec::vec<ROW> mat_mul_vec()`
This part is too difficult, written with the help of `ChatGPT5.5`.  
Parameter format as follows:
```cpp
mat_mul_vec(mat::mat<,>, vec::vec<>) {}
```
## `m4ths::mat`
### 1.`struct mat`
Uses a 2D array to store the matrix
```cpp
template <unsigned short ROW,unsigned short COL>
struct mat{
	static constexpr unsigned short row = ROW;
	static constexpr unsigned short col = COL;
	double value[row][col] = { 0 };
};
```
### 2.`static auto newm()`
Simplifies matrix assignment operations through parameter enumeration.  
Parameter format as follows:
```cpp
newm(Args... args) {}
```
## `m4ths::vec`
### 1.`struct vec`
Uses a 1D array to store the vector
```cpp
template <unsigned short D>
struct vec {
	static constexpr unsigned short d = D;
	double value[d] = { 0 };
};
```
### 2.`static auto newv()`
Automatic parameter deduction, format as follows:
```cpp
newv(Args...args) {}
```
### 3.`static vec<D> num_mul_vec()`
Parameter format as follows:
```
num_mul_vec(double, vec<>) {}
```
## `m4ths::con`
Nothing much to say, go read the code yourself.
