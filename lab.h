#ifndef LIB_H
#define LIB_H

constexpr auto zhongwen = "中文";

#include <cmath>
#include <cstdlib>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define MAX(x, y) ((x) > (y) ? (x) : (y))

#define SQUARE(x) ((x) * (x))

#define POWER(x, n) pow((x), (n))

#define IS_EVEN(x) ((x) % 2 == 0)

#define IS_ODD(x) ((x) % 2 != 0)

#endif // LIB_H