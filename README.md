|[简体中文](./README.md)|[English](./README_en.md)|  
![repo](https://img.shields.io/badge/cxr1--dev-m4ths-blue?logo=github)
![lang](https://img.shields.io/badge/By-C++-green?logo=cplusplus)
# m4ths——基于C++的线性代数计算库
作者：Cxr1  
最新更新时间：2026.5.16 UTC+8:00
## 主要功能
- 矩阵`m4ths::mat`
- 向量`m4ths::vec`
- 常数`m4ths::con`
## `m4ths`
### 1.`egg()`
彩蛋哟~，自己去看看吧
### 2.`vec::vec<ROW> mat_mul_vec()`
这部分太难了，由`ChatGPT5.5`帮助编写。  
参数格式如下：
```cpp
mat_mul_vec(mat::mat<,>, vec::vec<>) {}
```
## `m4ths::mat`
### 1.`struct mat`
使用二维数组存储矩阵
```cpp
template <unsigned short ROW,unsigned short COL>
struct mat{
	static constexpr unsigned short row = ROW;
	static constexpr unsigned short col = COL;
	double value[row][col] = { 0 };
};
```
### 2.`static auto newm()`
通过参数枚举简化矩阵赋值操作  
参数格式如下：
```cpp
newm(Args... args) {}
```
## `m4ths::vec`
### 1.`struct vec`
使用一维数组存储向量
```cpp
template <unsigned short D>
struct vec {
	static constexpr unsigned short d = D;
	double value[d] = { 0 };
};
```
### 2.`static auto newv()`
参数自动推导，格式如下：
```cpp
newv(Args...args) {}
```
### 3.`static vec<D> num_mul_vec()`
参数格式如下：
```
num_mul_vec(double, vec<>) {}
```
## `m4ths::con`
没啥好说的，自己看代码去吧