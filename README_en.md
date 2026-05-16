# m4ths——基于C++的线性代数计算库
作者：Cxr1  
最新更新时间：2026.5.16 UTC+8:00
## 主要功能
- 矩阵`m4ths::mat`
- 向量`m4ths::vec`
- 常数`m4ths::con`
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
没啥好说的，自己看代码去吧