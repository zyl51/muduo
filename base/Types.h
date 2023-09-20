#ifndef MUDUO_BASE_TYPES_H
#define MUDUO_BASE_TYPES_H

// #include <stdint.h>
#include <cstring>
#include <string>

#ifndef NDEBUG
#include <assert.h>
#endif

namespace muduo
{
using std::string;

inline void memZero(void* p, size_t n)
{
    memset(p, 0, n);
}

// 适用于类型安全的转换使用，显示转换
template<typename To, typename From>
inline To implicit_cast(From const& f)
{
    return f;
}

}


#endif